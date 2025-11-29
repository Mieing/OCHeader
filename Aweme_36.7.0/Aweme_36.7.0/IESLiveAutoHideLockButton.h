@class UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveAutoHideLockButton : UIView

@property (nonatomic) BOOL isLock;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *lockView;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *unlockView;
@property (nonatomic) BOOL animationOptimize;

+ (BOOL)liveFixAutohideImage;

- (void)setButtonAccessibility;
- (void).cxx_destruct;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)hide;
- (void)setState:(BOOL)a0;
- (void)refreshUI;
- (void)setup;
- (void)show;

@end
