@class UIImageView, UILabel, UIView;
@protocol IESLiveGuideDailyDistributionViewDelegate;

@interface IESLiveGuideDailyDistributionView : UIView

@property (retain, nonatomic) UIImageView *locationImageView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UIImageView *visibleImageView;
@property (retain, nonatomic) UILabel *visibleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<IESLiveGuideDailyDistributionViewDelegate> delegate;

- (void)updateVisibleType:(int)a0;
- (void)distributionDidClick:(id)a0;
- (void)updateLocationTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
