@class WCFinderPoiRecommendDishesInfo, FinderPoiBasicInfoResponse_RecommendDishesComponent;
@protocol WCFinderPoiRecommendDishesViewModelDelegte;

@interface WCFinderPoiRecommendDishesViewModel : NSObject

@property (retain, nonatomic) FinderPoiBasicInfoResponse_RecommendDishesComponent *recommendDishesComponent;
@property (retain, nonatomic) WCFinderPoiRecommendDishesInfo *dishesInfo;
@property (weak, nonatomic) id<WCFinderPoiRecommendDishesViewModelDelegte> delegate;

- (id)initWithRecommendDishesComponent:(id)a0;
- (void)requestPoiRecommendDishesDetail;
- (id)dishDetailAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
