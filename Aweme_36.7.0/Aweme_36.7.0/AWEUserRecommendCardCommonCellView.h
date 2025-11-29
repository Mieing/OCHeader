@class NSString;
@protocol AWEUserRecommendTableViewModelProtocol, AWEUserRecommendCellModelProtocol;

@interface AWEUserRecommendCardCommonCellView : AWEUserRecommendCardBaseCellView <AWEUserRecommendCardCellViewProtocol>

@property (retain, nonatomic) id<AWEUserRecommendCellModelProtocol> model;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)onSelected;
- (void)onModelUpdated;
- (void).cxx_destruct;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
