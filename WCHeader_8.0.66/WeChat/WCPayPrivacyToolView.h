@class UIButton, UIImageView, UIView;
@protocol WCPayPrivacyToolViewDelegate;

@interface WCPayPrivacyToolView : UIView

@property (retain, nonatomic) UIButton *m_notAgreeButton;
@property (retain, nonatomic) UIButton *m_agreeButton;
@property (retain, nonatomic) UIImageView *m_blurImageView;
@property (retain, nonatomic) UIView *m_buttonContentView;
@property (weak, nonatomic) id<WCPayPrivacyToolViewDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateFrame;
- (void)updateButtonContentView;
- (void)updateNotAgreeButton;
- (void)updateAgreeButton;
- (void)updateBlurImageView;
- (void)adjustToolViewFrame;
- (double)getBlurImageHeight;
- (void)onClickAgreeButton;
- (void)onClickNotAgreeButton;
- (void).cxx_destruct;

@end
