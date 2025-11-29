@class UILabel, AWEECOMIMCardCountdownLabel;
@protocol AWEECOMIMCardCountdownDelegate;

@interface AWEECOMIMCardComponentCommonTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEECOMIMCardCountdownLabel *countDownLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (weak, nonatomic) id<AWEECOMIMCardCountdownDelegate> delegate;

+ (double)designHeight;
+ (id)cardTitleFont;
+ (double)cardTitleHeight;

- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
