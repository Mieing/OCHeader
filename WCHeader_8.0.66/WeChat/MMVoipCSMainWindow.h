@class UIImageView;
@protocol MMVoipCSMainWindowDelegate;

@interface MMVoipCSMainWindow : MMWindow

@property (retain, nonatomic) UIImageView *m_blurView;
@property (nonatomic) BOOL m_hasStartQuitAnimation;
@property (weak, nonatomic) id<MMVoipCSMainWindowDelegate> m_mainWindowDelegate;

- (id)init;
- (void)dealloc;
- (void)extendWithAnimation;
- (void)collapseWithAnimation;
- (void)extendFromCollapseWithAnimation;
- (void)quitWithAnimation;
- (BOOL)hasStartQuitAnimation;
- (void)collapseWithAnimationDidStop;
- (void)quitWithAnimationDidStop;
- (void).cxx_destruct;

@end
