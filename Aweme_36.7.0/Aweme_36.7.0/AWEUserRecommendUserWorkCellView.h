@class AWEUserRecommendPersonCellView, NSString, AWEBinding, UIView, AWEUserRecommendUserWorkCellModel, AFDUserWorkCollectionView;
@protocol AWEUserRecommendTableViewModelProtocol, AFDUserWorkCollectionViewDataSource;

@interface AWEUserRecommendUserWorkCellView : UIView <AWEUserRecommendCellViewProtocol>

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) AWEUserRecommendPersonCellView *personCellView;
@property (retain, nonatomic) AFDUserWorkCollectionView *userWorkCollectionView;
@property (retain, nonatomic) id<AFDUserWorkCollectionViewDataSource> userWorkDataSource;
@property (retain, nonatomic) AWEBinding *yellowDotBinding;
@property (retain, nonatomic) AWEUserRecommendUserWorkCellModel *model;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
+ (double)heightForModel:(id)a0 viewModel:(id)a1;

- (void)configWithModel:(id)a0;
- (void)onSelected;
- (id)p_userWorkDataSource;
- (void)p_didEnterAwemeDetail;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)willDisplay;

@end
