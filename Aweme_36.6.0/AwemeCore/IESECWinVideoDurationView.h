@class UIImageView, UILabel;

@interface IESECWinVideoDurationView : UIView

@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UILabel *durationLabel;

- (void)updateDurationViewWithVideoObject:(id)a0;
- (void)updateDurationViewWithDurationText:(id)a0 backgroundColor:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setUpConstraints;

@end
