@class NSString, UINavigationController, BFAppLinkReturnToRefererView;
@protocol BFAppLinkReturnToRefererControllerDelegate;

@interface BFAppLinkReturnToRefererController : NSObject <BFAppLinkReturnToRefererViewDelegate> {
    UINavigationController *_navigationController;
    BFAppLinkReturnToRefererView *_view;
}

@property (weak, nonatomic) id<BFAppLinkReturnToRefererControllerDelegate> delegate;
@property (retain, nonatomic) BFAppLinkReturnToRefererView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initForDisplayAboveNavController:(id)a0;
- (void)statusBarFrameWillChange:(id)a0;
- (void)moveNavigationBar;
- (void)showViewForRefererAppLink:(id)a0;
- (void)closeViewAnimated:(BOOL)a0 explicitlyClosed:(BOOL)a1;
- (void)openRefererAppLink:(id)a0;
- (void)updateNavigationBarY:(double)a0;
- (void)returnToRefererViewDidTapInsideCloseButton:(id)a0;
- (void)returnToRefererViewDidTapInsideLink:(id)a0 link:(id)a1;
- (void)showViewForRefererURL:(id)a0;
- (void)removeFromNavController;
- (void)closeViewAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)statusBarFrameDidChange:(id)a0;
- (void)orientationDidChange:(id)a0;

@end
