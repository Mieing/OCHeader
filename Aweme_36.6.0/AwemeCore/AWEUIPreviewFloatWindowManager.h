@class AWEUIPreviewFloatWindowViewController, AWEUIPreviewFloatWindow;

@interface AWEUIPreviewFloatWindowManager : NSObject

@property (class, readonly, nonatomic) AWEUIPreviewFloatWindowManager *sharedManager;

@property (retain, nonatomic) AWEUIPreviewFloatWindow *explorerWindow;
@property (retain, nonatomic) AWEUIPreviewFloatWindowViewController *explorerViewController;
@property (readonly, nonatomic) BOOL isHidden;
@property (copy, nonatomic) id /* block */ statusChangeBlock;

- (void)showIfNeed;
- (id)getStoreKey;
- (void)windowWillResignVisible:(id)a0;
- (void)updateWindowStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (BOOL)isSwitchOn;

@end
