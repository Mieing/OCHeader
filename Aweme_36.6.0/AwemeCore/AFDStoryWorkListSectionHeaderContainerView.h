@class UIStackView, AWEAddMateGuideBannerView, AWEAddMateGuideBannerConfig, AFDStoryWorkListVisibleHeaderView, AFDStoryWorkListSectionHeaderView;

@interface AFDStoryWorkListSectionHeaderContainerView : UICollectionReusableView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AFDStoryWorkListSectionHeaderView *yearHeader;
@property (retain, nonatomic) AFDStoryWorkListVisibleHeaderView *visibleHeader;
@property (retain, nonatomic) AWEAddMateGuideBannerView *addMateHeader;
@property (copy, nonatomic) id /* block */ addMateDismissBlock;
@property (copy, nonatomic) id /* block */ addMateTappedBlock;
@property (retain, nonatomic) AWEAddMateGuideBannerConfig *addMateGuideBannerConfig;

- (void)initView;
- (void)updateWithShowVisibleHeader:(BOOL)a0 withShowYearHeader:(BOOL)a1 withAddMateHeader:(BOOL)a2;
- (void).cxx_destruct;
- (void)setYear:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
