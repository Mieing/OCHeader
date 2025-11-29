@class UILabel, YYLabel, UIView;
@protocol AFDRecommendPanelHeaderViewDelegate;

@interface AFDRecommendPanelHeaderView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *recommendCountLabel;
@property (weak, nonatomic) id<AFDRecommendPanelHeaderViewDelegate> delegate;

+ (double)headerHeight;

- (void)didClickRecommendCountText;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
