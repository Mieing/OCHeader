@class UILabel;

@interface MMPatternLockTipsView : UIView

@property (nonatomic) long long curScene;
@property (retain, nonatomic) UILabel *tipsLabel;

- (id)initTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPatternScene:(long long)a1;
- (void)initView;
- (void)setupFirstTips;
- (void)updateContentInPwdErrorWithRetryTime:(long long)a0 animated:(BOOL)a1;
- (void)updateContentInComfirm;
- (void)updateContentInComfirmError;
- (void)updateContentInResultInvalid;
- (void)updateContentInBlock;
- (void)updateContentInSetup;
- (void)animationShake;
- (BOOL)shouldShowSpecailEntranceTip;
- (void).cxx_destruct;

@end
