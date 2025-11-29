@class NSString;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendContactsCellView : AWEUserRecommendBaseCellView <AWEUserRecommendCellViewProtocol>

@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSelected;
- (void)p_clickPrimaryButton:(id)a0;
- (void)p_clickRemoveButton:(id)a0;
- (void)p_accessibilityRemove;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (id)secondaryButtonTitle;
- (void)willDisplay;
- (void)updateAccessibilityElements;

@end
