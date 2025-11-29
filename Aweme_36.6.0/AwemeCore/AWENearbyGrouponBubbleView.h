@class AWENearbyGrouponBubbleModel, UIImageView, UILabel, AWENearbyAttributedLabel, UIButton;

@interface AWENearbyGrouponBubbleView : UIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWENearbyAttributedLabel *attributedLabel;
@property (nonatomic) BOOL didSetup;
@property (retain, nonatomic) AWENearbyGrouponBubbleModel *model;
@property (nonatomic) long long position;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ backgroundHandler;

- (void)onCloseButtonClicked:(id)a0;
- (void)onActionButtonClicked:(id)a0;
- (void)setup:(id)a0 position:(long long)a1;
- (void)updateArrowPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setupWhiteBubble:(id)a0;
- (void)setupGradientBubble:(id)a0;
- (void)setupIconTextBubble:(id)a0;
- (void)setupGuideTipsBubble:(id)a0;
- (id)stretchableImageWithType:(id)a0;
- (id)arrowImageWithType:(id)a0;
- (id)stretchableImageWithType:(id)a0 position:(long long)a1;
- (void)onBackgroundButtonClicked:(id)a0;
- (id)getPositionString:(long long)a0;
- (void).cxx_destruct;

@end
