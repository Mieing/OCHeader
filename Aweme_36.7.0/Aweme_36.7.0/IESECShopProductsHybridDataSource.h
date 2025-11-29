@class NSMutableDictionary, NSMapTable, IESECShopProductsFilterControl, NSDictionary, IESECShopBizExtraModel, NSString, IESECShopProductsExposureTracker, IESECShopProductsClientState, IESECListKitListModel, IESECShopProductsPromotionalFilterState, NSArray, NSNumber, IESECShopProductsHybridContext, IESECListKitBFFViewController, IESECObjectMapper;

@interface IESECShopProductsHybridDataSource : NSObject <IESECShopProductsExposureTrackerDataSource, IESECShopProductsDataSource> {
    IESECShopProductsHybridContext *_context;
    unsigned long long _counter;
    IESECObjectMapper *_objectMapper;
    IESECShopProductsExposureTracker *_exposureTracker;
    NSArray *_reservedSections;
    NSMutableDictionary *_reservedConfigurations;
    struct optional<iesec::shop::product_list::BridgeRequestParams> { union { char __null_state_; struct BridgeRequestParams { NSDictionary *overrideFilterParams; NSDictionary *overrideClientState; NSMutableDictionary *additionParameters; } __val_; } ; BOOL __engaged_; } _bridgeRequestParams;
}

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *reservedSectionIDs;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) IESECShopProductsFilterControl *filterControl;
@property (retain, nonatomic) IESECShopProductsClientState *clientState;
@property (weak, nonatomic) IESECListKitBFFViewController *listKitViewController;
@property (nonatomic, getter=isInitialRequest) BOOL initialRequest;
@property (retain, nonatomic) IESECShopProductsPromotionalFilterState *promotionalFilterState;
@property (copy, nonatomic) NSString *paginationParams;
@property (copy, nonatomic) IESECShopBizExtraModel *bizExtra;
@property (nonatomic) unsigned long long sortOrder;
@property (copy, nonatomic) NSDictionary *externalRequestParams;
@property (retain, nonatomic) IESECListKitListModel *candidateModel;
@property (copy, nonatomic) NSString *appearanceAnimationItemID;
@property (retain, nonatomic) NSMutableDictionary *requestParametersFromJSBridge;
@property (readonly, nonatomic) BOOL isLynxFilterBar;
@property (retain, nonatomic) NSNumber *productLayout;
@property (retain, nonatomic) NSNumber *forcedProductLayout;
@property (readonly, nonatomic) long long productTotalCount;
@property (readonly, nonatomic) long long productRealCount;
@property (readonly, nonatomic) long long titleMaxLines;
@property (retain, nonatomic) NSMapTable *id2ControllerMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateListSpanSize:(id)a0 style:(unsigned long long)a1;

- (void)productDidDisplay:(id)a0 atIndex:(long long)a1;
- (void)fetchListWithCompletion:(id /* block */)a0;
- (id)cellControllerAtIndexPath:(id)a0;
- (id)goodsCardViewModelWithGoodsModel:(id)a0;
- (id)exposureTrackerAllProductIDs;
- (id)sectionSnapshot:(id)a0 index:(long long *)a1;
- (id)sectionSnapshotAtIndex:(long long)a0;
- (void)updateFilterButtonIfNeededWithListModel:(id)a0;
- (void)updateHasTopModuleIfNeeded:(id)a0;
- (void)updateProduct:(id)a0;
- (void)updateBizExtra:(id)a0;
- (void)requestHybridListWithExternalParameter:(id)a0 completion:(id /* block */)a1;
- (id)sectionSnapshot:(id)a0;
- (id)extractParametersFromBridge:(id)a0 forKey:(id)a1;
- (void)updateActivityFilterButtons:(id)a0 switchButtons:(id)a1;
- (void)updateCouponInfoWithExtra:(id)a0;
- (id)initWithHybridContext:(id)a0;
- (id)itemDataAtIndexPath:(id)a0;
- (void)resetExceptFilter;
- (void)resetWithUpdateButtons:(BOOL)a0;
- (void)updatePreloadedList:(id)a0;
- (void)fetchListWithProductIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeCachedViewModelWithProduct:(id)a0;
- (void)removeUnexposedProducts;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)snapshot;
- (void)deleteAllItems;

@end
