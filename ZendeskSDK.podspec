Pod::Spec.new do |s|
  s.name         = "ZendeskSDK"
  s.version      = "1.10.0.1"
  s.summary      = "Zendesk SDK 1.10.0.1"
  s.homepage     = "https://github.com/zendesk/zendesk_sdk_ios"
  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE

    ZendeskSDK
    Created by Zendesk on  3/30/2017
    Copyright (c) 2017 Zendesk. All rights reserved.

    By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
    Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
    Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
    acknowledge that such terms govern Your use of and access to the Mobile SDK.

    LICENSE
  }
  s.author       = 'Zendesk'
  s.source       = { :git => "https://github.com/zendesk/zendesk_sdk_ios.git", :tag => s.version }
  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.frameworks = 'MobileCoreServices', 'SystemConfiguration', 'Security', 'MessageUI'

  # Using subspecs to support installation without Localization part
  s.default_subspecs = 'UI', 'Providers'

  s.subspec 'UI' do |ss|
    ss.platform     = :ios, '8.0'
    ss.ios.vendored_frameworks = 'ZendeskSDK.framework'
    ss.preserve_paths = 'ZendeskSDK.framework'
    ss.resource_bundles = {
      'ZendeskSDK' => ['Assets/*'],
      'ZendeskSDKStrings' => ['Strings/*']
    }
    ss.dependency 'ZendeskSDK/Providers'
  end

  s.subspec 'Providers' do |ss|
    ss.platform     = :ios, '8.0'
    ss.ios.vendored_frameworks = 'ZendeskProviderSDK.framework'
    ss.preserve_paths = 'ZendeskProviderSDK.framework'
    ss.resource_bundles = {
      'ZendeskSDK' => ['Assets/*']
    }
  end

end
