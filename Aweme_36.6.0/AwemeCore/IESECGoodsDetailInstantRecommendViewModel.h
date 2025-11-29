@class NSArray, IESECSliceAction;
@protocol IESECGoodsDetailInstantRecommendDelegate;

@interface IESECGoodsDetailInstantRecommendViewModel : IESECGoodsDetailPageBaseViewModel

@property (weak, nonatomic) id<IESECGoodsDetailInstantRecommendDelegate> delegate;
@property (copy, nonatomic) NSArray *slices;
@property (retain, nonatomic) IESECSliceAction *asyncDataAction;

- (void)instantRecommendSectionControllerDidCreated;
- (void)instantRecommendDataUpdate:(id)a0;
- (void)instantRecommendAsyncActionFieldsUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
