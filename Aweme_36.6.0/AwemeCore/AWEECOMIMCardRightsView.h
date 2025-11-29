@class DUXBaseButton, UIImageView, UILabel, DUXBaseImageView, DUXBaseLabel;
@protocol AWEECOMIMSubCardRightsProtocol;

@interface AWEECOMIMCardRightsView : AWEECOMIMCustomBaseView

@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) DUXBaseLabel *centerSeparate;
@property (retain, nonatomic) UILabel *rightsLabel;
@property (retain, nonatomic) DUXBaseButton *clickButton;
@property (retain, nonatomic) UIImageView *rightButtonView;
@property (retain, nonatomic) id<AWEECOMIMSubCardRightsProtocol> data;

+ (double)rightLabelHeight;
+ (double)designHeightWithData:(id)a0;
+ (double)topPadding;
+ (id)labelFont;

- (void)buttonClickAction:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)customInit;
- (void)updateWithData:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
