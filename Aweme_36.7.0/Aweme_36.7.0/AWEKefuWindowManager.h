@class AWEKefuWindow;

@interface AWEKefuWindowManager : NSObject

@property (retain, nonatomic) AWEKefuWindow *kefuWindow;

+ (id)sharedInstance;

- (void)tryRemoveWebViewController;
- (BOOL)tryAddWebViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getWindowBounds;
- (void)addContainerView:(id)a0;
- (void)removeContainerView:(id)a0;
- (void)checkWindowHiddenState;
- (void).cxx_destruct;

@end
