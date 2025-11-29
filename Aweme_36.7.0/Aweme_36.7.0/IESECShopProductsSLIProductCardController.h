@class NSString, IESECShopProductsSubscriberHandler, IESECShopProductsProductCardController;

@interface IESECShopProductsSLIProductCardController : IESECShopProductsSLICardController <IESECShopProductsSubscriberHandlerDelegate, IESECShopProductsSLIProductCardController>

@property (retain, nonatomic) IESECShopProductsProductCardController *wrappedController;
@property (retain, nonatomic) IESECShopProductsSubscriberHandler *subscriberHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (id)sliceUniqueID;
- (void)triggerSliceXEvent:(id)a0;
- (id)clickExtraParams;
- (void)tagListShow:(id)a0;
- (void)clickTagList:(id)a0;
- (void)setIsFirstShow:(BOOL)a0;
- (void)configCell;
- (id)videoPlayerContainer;
- (void)setListUpdater:(id)a0;
- (void)setBffItemData:(id)a0;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)handleSubscribeWithParams:(id)a0;
- (id)productCoverView;
- (void)updateCardStatusWithAppointed:(BOOL)a0;
- (BOOL)isAppointed;
- (id)productCoverImage;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)setIndex:(long long)a0;
- (void)setSection:(long long)a0;
- (void)didSelectItemAtIndex:(long long)a0;
- (void)setCell:(id)a0;

@end
