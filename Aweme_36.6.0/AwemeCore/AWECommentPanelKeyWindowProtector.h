@class UIWindow;

@interface AWECommentPanelKeyWindowProtector : NSObject

@property (weak, nonatomic) UIWindow *mainKeyWindow;

+ (id)sharedInstance;

- (BOOL)savePanelHostWindowIfNeeded:(id)a0;
- (void)restorePanelHostWindowIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
