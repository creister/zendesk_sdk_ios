//
//  ZDKRequestListTableCell.h
//  ZendeskSDK
//
//  Created by Zendesk on 14/06/2014.
//  Copyright (c) 2014 Zendesk. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "ZDKSpinnerDelegate.h"
@class ZDKRequest;

#define ZDSDK_REQUEST_CELL_DESCRIPTION_FONT [UIFont systemFontOfSize:15.0f]
#define ZDSDK_REQUEST_CELL_CREATED_AT_FONT [UIFont systemFontOfSize:13.0f]
#define ZDSDK_REQUEST_CELL_UNREAD_COLOR [UIColor colorWithRed:0.47059f green:0.6392f blue:0.0f alpha:1.0f]
#define ZDSDK_REQUEST_CELL_DESCRIPTION_COLOR [UIColor colorWithWhite:0.26f alpha:1.0f]
#define ZDSDK_REQUEST_CELL_CREATED_AT_COLOR [UIColor colorWithWhite:0.54f alpha:1.0f]
#define ZDSDK_REQUEST_CELL_VERTICAL_MARGIN 20.0f
#define ZDSDK_REQUEST_CELL_DESCRIPTION_TS_MARGIN 5.0f
#define ZDSDK_REQUEST_CELL_LEFT_INSET 25.0f
#define ZDSDK_REQUEST_CELL_BACKGROUND_COLOR [UIColor whiteColor]

#define ZDSDK_REQUEST_CELL_EMPTY_FONT [UIFont systemFontOfSize:11.0f]
#define ZDSDK_REQUEST_CELL_EMPTY_COLOR [UIColor colorWithWhite:0.3f alpha:1.0f]

#define ZDSDK_REQUEST_CELL_ERROR_FONT [UIFont systemFontOfSize:11.0f]
#define ZDSDK_REQUEST_CELL_ERROR_COLOR [UIColor colorWithRed:0.8f green:0.0f blue:0.0f alpha:0.8f]
#define ZDSDK_REQUEST_CELL_RETRY_BUTTON_FONT [UIFont systemFontOfSize:11.0f]
#define ZDSDK_REQUEST_CELL_RETRY_BUTTON_FONT_COLOR [UIColor colorWithWhite:0.2627f alpha:1.0f]
#define ZDSDK_REQUEST_CELL_RETRY_BUTTON_BG_COLOR [UIColor whiteColor]
#define ZDSDK_REQUEST_CELL_RETRY_BUTTON_BORDER_COLOR [UIColor colorWithWhite:0.8470f alpha:1.0f]


/**
 * Request cell for the request list table.
 */
@interface ZDKRequestListTableCell : UITableViewCell

/**
 * The unread indicator view.
 */
@property (nonatomic, strong) UIView *unreadView;

/**
 * The description label.
 */
@property (nonatomic, strong) UILabel *requestDescription;

/**
 * 'The created at' label.
 */
@property (nonatomic, strong) UILabel *createdAt;

/**
 * The font to be used by the description label.
 */
@property (nonatomic, strong) UIFont *descriptionFont UI_APPEARANCE_SELECTOR;

/**
 * The font to be used by the created at label.
 */
@property (nonatomic, strong) UIFont *createdAtFont UI_APPEARANCE_SELECTOR;

/**
 * The color of the unread marker.
 */
@property (nonatomic, strong) UIColor *unreadColor UI_APPEARANCE_SELECTOR;

/**
 * The color of the description text.
 */
@property (nonatomic, strong) UIColor *descriptionColor UI_APPEARANCE_SELECTOR;

/**
 * The color of the created at text.
 */
@property (nonatomic, strong) UIColor *createdAtColor UI_APPEARANCE_SELECTOR;

/**
 * Vertical margin between the cell content and the cell edge.
 */
@property (nonatomic, assign) CGFloat verticalMargin UI_APPEARANCE_SELECTOR;

/**
 * Vertrical margin between the description text and the timestamp/created at text
 */
@property (nonatomic, assign) CGFloat descriptionTimestampMargin UI_APPEARANCE_SELECTOR;

/**
 * Left content inset.
 */
@property (nonatomic, assign) CGFloat leftInset UI_APPEARANCE_SELECTOR;

/**
 * Background color of the cell.
 */
@property (nonatomic, assign) UIColor *cellBackgroundColor UI_APPEARANCE_SELECTOR;


/**
 * Setup the cell with the request info.
 */
- (void) prepareWithRequest:(ZDKRequest*)request;

@end


#pragma mark -


/**
 * Empty state cell for the req uest list.
 */
@interface ZDRequestListEmptyTableCell : UITableViewCell

/**
 * Empty cell text label.
 */
@property (nonatomic, strong) UILabel *messageLabel;

/**
 * Empty cell text font.
 */
@property (nonatomic, strong) UIFont *messageFont UI_APPEARANCE_SELECTOR;

/**
 * Empty cell text color.
 */
@property (nonatomic, strong) UIColor *messageColor UI_APPEARANCE_SELECTOR;


@end


#pragma mark -


/**
 * Retry delegate for requesting a refresh.
 */
@protocol ZDRequestListRetryDelegate <NSObject>


/**
 * Refresh the request list.
 */
- (void) refresh;

@end


#pragma mark -


/**
 * Loading state cell for the request list.
 */
@interface ZDRequestListLoadingTableCell : UITableViewCell

/**
 * Spinner to indicate the loading state.
 */
@property (nonatomic, strong) id<ZDKSpinnerDelegate> spinner UI_APPEARANCE_SELECTOR;


@end

