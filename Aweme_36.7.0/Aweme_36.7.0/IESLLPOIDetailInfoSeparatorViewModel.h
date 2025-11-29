@class UIView;

@interface IESLLPOIDetailInfoSeparatorViewModel : IESLLPOIDetailInfoBaseViewModel

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *topSeparator;

- (void)setupViewModel;
- (void)updateSeparator;
- (void)showTopSeparatorWithYOffset:(double)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (void)hideSeparator;
- (void)hideTopSeparator;

@end
