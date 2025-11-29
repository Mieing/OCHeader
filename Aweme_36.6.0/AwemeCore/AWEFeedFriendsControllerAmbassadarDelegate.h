@class AWEFeedFriendsController, UIViewController, NSString;
@protocol AWEFeedContainerProtocol;

@interface AWEFeedFriendsControllerAmbassadarDelegate : NSObject <AWEFeedTableViewControllerFriendsAmbassadarDelegate>

@property (weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *feedTableViewController;
@property (weak, nonatomic) AWEFeedFriendsController *feedFriendsController;
@property (copy, nonatomic) NSString *requestMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)currentAweme;
- (long long)willPlayIndex;
- (id)feedContainer;
- (void)insertAwemeWithUploadSuccess:(id)a0;
- (long long)didEndPlayIndex;
- (BOOL)emptyScrollViewHiddenState;
- (void)replaceAweme:(id)a0 withModel:(id)a1;
- (id)_getModelSafelyForRow:(long long)a0;
- (id)getBackToFeedMaskViewWithCell:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFriendsQuicklySlideMaskGuide:(BOOL)a1;
- (id)familiarContainer;
- (long long)currentIndex;
- (void).cxx_destruct;
- (void)play;
- (long long)type;
- (id)view;
- (BOOL)isActive;
- (id)currentCell;
- (id)dataController;

@end
