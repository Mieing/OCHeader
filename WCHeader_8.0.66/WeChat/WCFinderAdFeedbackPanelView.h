@class MMUIButton, UILabel, UIView, UIButton;
@protocol WCFinderAdFeedbackPanelViewDelegate;

@interface WCFinderAdFeedbackPanelView : UIView

@property (retain, nonatomic) UIView *triangleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *centerButton;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) MMUIButton *bottomButton;
@property (retain, nonatomic) MMUIButton *maskingView;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<WCFinderAdFeedbackPanelViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRewardAdMarketingWord:(id)a0;
- (void)setupSubviews;
- (void)onClickLeftButton:(id)a0;
- (void)onClickCenterButton:(id)a0;
- (void)onClickBottomButton:(id)a0;
- (void)onClickMaskView:(id)a0;
- (void).cxx_destruct;

@end
