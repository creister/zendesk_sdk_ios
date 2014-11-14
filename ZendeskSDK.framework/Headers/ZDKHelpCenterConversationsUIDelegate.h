//
//  ZDKHelpCenterConversationsUIDelegate.h
//  ZendeskSDK
//
//  Created by Zendesk on 11/11/2014.
//  Copyright (c) 2014 Zendesk. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 *  Enum to describe the types of nav bar button that display conversations.
 */
typedef NS_ENUM(NSUInteger, ZDKNavBarConversationsUIType) {
    /**
     *  Nav bar button with localized label for conversations.
     */
    ZDKNavBarConversationsUITypeLocalizedLabel,
    /**
     *  Nav bar button with image for conversations.
     */
    ZDKNavBarConversationsUITypeImage,
};

@protocol ZDKHelpCenterConversationsUIDelegate <NSObject>


/**
 *  To conform implementations should return the conversations UI type desired.
 *
 *  @return The ZDKNavBarConversationsUIType to display.
 */
- (ZDKNavBarConversationsUIType) navBarConversationsUIType;


/**
 *  To conform implementations should return an immage for the right nav bar button.
 *
 *  @return An image for the right nav bar button.
 */
- (UIImage *) conversationsBarButtonImage;


/**
 *  To conform implementations should return a localized string for the right nav bar button title.
 *
 *  @return A localized string for the right nav bar button.
 */
- (NSString *) conversationsBarButtonLocalizedLabel;


@end
