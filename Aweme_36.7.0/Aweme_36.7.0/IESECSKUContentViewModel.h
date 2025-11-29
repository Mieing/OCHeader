@class NSString, NSArray, IESECSKUDetailContext, IESECSKUModel, IESECSKUCouponViewModel, IESECSKUCarAdaptViewModel, NSNumber;

@interface IESECSKUContentViewModel : NSObject <IESECSKUViewModelProtocol>

@property (copy, nonatomic) NSArray *sectionObjectsArray;
@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECSKUCouponViewModel *couponViewModel;
@property (retain, nonatomic) IESECSKUCarAdaptViewModel *carAdaptViewModel;
@property (nonatomic) BOOL isScrollToBottom;
@property (retain, nonatomic) NSNumber *termCount;
@property (readonly, nonatomic) BOOL isSKUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (void)updateUserDeviceRecommendationWithSKUModel:(id)a0 detailContext:(id)a1;
- (void).cxx_destruct;

@end
