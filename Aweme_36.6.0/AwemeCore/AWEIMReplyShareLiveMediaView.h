@class UIImageView, UIVisualEffectView, UIView, UILabel, AWEIMHighlightControl;
@protocol IESIMGradientViewProtocol;

@interface AWEIMReplyShareLiveMediaView : UIView

@property (retain, nonatomic) UIView *bottomAnchorView;
@property (retain, nonatomic) UIView *layoutView;
@property (retain, nonatomic) AWEIMHighlightControl *livingAnchorContentView;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *liveStatusImageView;
@property (retain, nonatomic) UILabel *liveStatusLabel;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *gradientView;

- (void)p_addGesture;
- (void)themeReload:(id)a0;
- (void)p_addSubViews;
- (void)p_constraintSubViews;
- (void)p_onTapCard;
- (void)updateLayoutForLiving;
- (void)updateLayoutForNotLiving;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
