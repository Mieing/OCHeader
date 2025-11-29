@class NSString, FBSDKAppLinkReturnToRefererView, UINavigationController;
@protocol FBSDKAppLinkReturnToRefererControllerDelegate;

@interface FBSDKAppLinkReturnToRefererController : NSObject <FBSDKAppLinkReturnToRefererViewDelegate> {
    UINavigationController *_navigationController;
    FBSDKAppLinkReturnToRefererView *_view;
}

@property (weak, nonatomic) id<FBSDKAppLinkReturnToRefererControllerDelegate> delegate;
@property (retain, nonatomic) FBSDKAppLinkReturnToRefererView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initForDisplayAboveNavController:(id)a0;
- (void)dealloc;
- (void)showViewForRefererAppLink:(id)a0;
- (void)showViewForRefererURL:(id)a0;
- (void)removeFromNavController;
- (void)returnToRefererViewDidTapInsideCloseButton:(id)a0;
- (void)returnToRefererViewDidTapInsideLink:(id)a0 link:(id)a1;
- (void)statusBarFrameWillChange:(id)a0;
- (void)statusBarFrameDidChange:(id)a0;
- (void)orientationDidChange:(id)a0;
- (void)moveNavigationBar;
- (void)updateNavigationBarY:(double)a0;
- (void)closeViewAnimated:(BOOL)a0;
- (void)closeViewAnimated:(BOOL)a0 explicitlyClosed:(BOOL)a1;
- (void)openRefererAppLink:(id)a0;
- (void).cxx_destruct;

@end
