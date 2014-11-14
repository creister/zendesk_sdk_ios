//
//  ZDKRequestListViewController.h
//  ZendeskSDK
//
//  Created by Zendesk on 15/10/2014.
//  Copyright (c) 2014 Zendesk. All rights reserved.
//

#import "ZDKRequests.h"
#import "ZDKCreateRequestUIDelegate.h"

@interface ZDKRequestListViewController : ZDKUIViewController

/**
 *  Scroll view that contains the ZDKRequestListTable.
 */
@property (nonatomic, strong) UIScrollView *requestListContainer;

/**
 *  A table that displays open requests.
 */
@property (nonatomic, strong) ZDKRequestListTable *requestList;

/**
 *  Delegate for nav ban button UI. 
 */
@property (nonatomic, weak) id<ZDKCreateRequestUIDelegate> delegate;


@end
