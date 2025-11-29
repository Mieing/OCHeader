@class UILabel, AWEFeedPlayableAppInfoModel, AWERatingView;

@interface AWEFeedPlayableAppInfoView : UIView

@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWERatingView *starView;
@property (retain, nonatomic) AWEFeedPlayableAppInfoModel *model;

- (void)configValueViewWithModel:(id)a0;
- (void)configStarViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
