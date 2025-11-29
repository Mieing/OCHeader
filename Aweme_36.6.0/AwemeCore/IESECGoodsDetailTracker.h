@class NSString, NSDictionary, IESECGoodsDetailParameters, IESECOnceHelper;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailTracker : NSObject <IESECGoodsDetailParametersProtocol>

@property (weak, nonatomic) IESECGoodsDetailParameters *parameters;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) NSDictionary *compatibleTrackBaseParams;
@property (nonatomic) double adDurationStart;
@property (retain, nonatomic) IESECOnceHelper *once;
@property (readonly, copy, nonatomic) NSDictionary *basicParams;
@property (readonly, nonatomic) id /* block */ v3;
@property (copy, nonatomic) NSDictionary *entranceInfoTupleDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getNewLableNameWithOrigin:(id)a0 andNews:(id)a1;

- (void)embedInContainer:(id)a0;
- (void)initializeWithParameters:(id)a0;
- (void)resetAdDuration;
- (void)trackProductItemAdLabel:(id)a0;
- (void)trackShopAdLabel:(id)a0;
- (id)baseAdExtraDataDict;
- (void)updateEntranceInfoWithAdditionParams:(id)a0;
- (id)douyinSubmitOrderAdInfoDict;
- (void)trackGoodsDetailADWithLabel:(id)a0 ADRefer:(id)a1 ADTag:(id)a2 params:(id)a3;
- (void)compatibleBaseParams:(id)a0;
- (void)trackGoodsDetailADWithLabel:(id)a0 ADRefer:(id)a1 ADTag:(id)a2 params:(id)a3 once:(BOOL)a4;
- (void)trackOnceProductItemAdLabel:(id)a0;
- (void)trackFeedsAdLabel:(id)a0 refer:(id)a1 duration:(id)a2 recommendItem:(id)a3;
- (void)trackFeedsAdClickURLWithRecommendItem:(id)a0;
- (void)trackFeedsAdLabel:(id)a0 refer:(id)a1 duration:(id)a2 recommendItem:(id)a3 once:(id)a4;
- (void)trackFeedsAdShowURLWithRecommendItem:(id)a0 once:(id)a1;
- (void)removeTrackFeedsAdLabelOnceKey:(id)a0;
- (void)handleContextUpdate:(id)a0;
- (void)setupEntranceInfoTupleDict;
- (void)updateEntranceInfoWithPromotions;
- (void)setupProductActivityType;
- (void)trackGoodsDetailADWithLabel:(id)a0 ADRefer:(id)a1 params:(id)a2;
- (BOOL)onceForKey:(id)a0;
- (void)trackProductItemAdLabel:(id)a0 extra:(id)a1;
- (void)trackGoodsDetailADWithLabel:(id)a0 params:(id)a1;
- (void)resetOnceKeyHasPrefix:(id)a0;
- (void)trackFeedsAdShowURLWithRecommendItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
