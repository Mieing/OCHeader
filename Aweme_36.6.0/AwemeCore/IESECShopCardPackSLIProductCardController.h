@class NSString, NSDictionary, IESECShopCardPackProductModel, NSMutableSet, IESECShopProductsSubscriberHandler;

@interface IESECShopCardPackSLIProductCardController : IESECShopProductsSLICardController <IESECShopProductsSubscriberHandlerDelegate, IESECShopCardPackSLIProductCardController> {
    BOOL _isFinishLoad;
    BOOL _isTagExposed;
    NSMutableSet *_exposedTagIDs;
    NSDictionary *_exposedTagEventParams;
    id /* block */ _deferredOnShowProduct;
}

@property (retain, nonatomic) IESECShopProductsSubscriberHandler *subscriberHandler;
@property (readonly, nonatomic) IESECShopCardPackProductModel *productModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (id)sliceUniqueID;
- (void)sliceXContentView:(id)a0 didFinishLoad:(BOOL)a1;
- (void)preprocessSliceXEvent:(id)a0;
- (void)triggerSliceXEvent:(id)a0;
- (void)tagListView:(id)a0 tagDidShow:(id)a1;
- (void)configCell;
- (id)videoPlayerContainer;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (BOOL)disableNATrackShowProduct;
- (id)tabNameSecond;
- (id)getTagEventParams;
- (void)tryReportShowProduct:(id /* block */)a0;
- (void)extraTrackShowActionIfNeeded;
- (BOOL)disableNAOpenProductDetail;
- (void)extraTrackClickActionIfNeeded;
- (void)handleSubscribeWithParams:(id)a0;
- (id)productCoverView;
- (id)currentSectionModel;
- (void)updateCardStatusWithAppointed:(BOOL)a0;
- (BOOL)isAppointed;
- (id)productCoverImage;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;

@end
