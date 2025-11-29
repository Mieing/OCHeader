@class UINavigationController;
@protocol WCFinderFeedFriendsLikeListViewControllerDelegate;

@interface WCFinderFeedFriendsLikeListBaseViewController : MMUIHalfScreenViewController

@property (retain, nonatomic) UINavigationController *navVC;
@property (weak, nonatomic) id<WCFinderFeedFriendsLikeListViewControllerDelegate> friendsLikeListDelegate;
@property (copy, nonatomic) id /* block */ beforePushVCBlock;
@property (copy, nonatomic) id /* block */ afterPopVCBlock;
@property (nonatomic) BOOL showBackgroundMask;

- (void)addHighlightUsernames:(id)a0;
- (void).cxx_destruct;

@end
