@class DUXBasicSheet, NSString, AWEFavoriteFileAddNewVideoViewController, UIViewController;

@interface AWEFavoriteFileAddNewVideoViewManager : NSObject <DUXSheetDelegate>

@property (retain, nonatomic) AWEFavoriteFileAddNewVideoViewController *addNewVideoViewController;
@property (retain, nonatomic) UIViewController *topViewController;
@property (nonatomic) int hideBottomBarNumber;
@property (nonatomic) BOOL isHideBottomBar;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)showAddNewVideoView;
- (void).cxx_destruct;

@end
