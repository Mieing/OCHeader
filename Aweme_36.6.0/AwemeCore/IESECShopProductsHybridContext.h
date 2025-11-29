@class IESECShopGoodsState, IESECTracker, IESECShopGoodsActionHandler, IESECShopGoodsEventHandler, IESECShopProductLayoutManager, NSMutableDictionary, IESECShopProductsHybridDataSource, IESECShopProductsObjectPool, IESECServiceProxy, IESECShopProductsHybridViewController, IESECAtom, IESECStorePageContext;
@protocol IESECShopPageContextV2, IESECStoreContainerProtocol, IESECShopClientAiService, IESECShopImageService;

@interface IESECShopProductsHybridContext : NSObject {
    IESECShopGoodsActionHandler *_actionHandler;
    IESECShopGoodsEventHandler *_eventHandler;
    IESECServiceProxy<IESECShopImageService> *_imageService;
    IESECServiceProxy<IESECShopClientAiService> *_clientAiService;
}

@property (retain, nonatomic) IESECStorePageContext *storePageContext;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> storeContainer;
@property (retain, nonatomic) id<IESECShopPageContextV2> cv2;
@property (weak, nonatomic) IESECShopProductsHybridViewController *viewController;
@property (retain, nonatomic) IESECAtom *listStyle;
@property (nonatomic) long long skuIdx;
@property (retain, nonatomic) NSMutableDictionary *kvStorage;
@property (weak, nonatomic) IESECShopProductsHybridDataSource *dataSource;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECShopGoodsState *backwardState;
@property (readonly, nonatomic) IESECShopGoodsActionHandler *backwardActionHandler;
@property (readonly, nonatomic) IESECShopGoodsEventHandler *backwardEventHandler;
@property (readonly, nonatomic) IESECShopProductLayoutManager *layoutManager;
@property (retain, nonatomic) IESECShopProductsObjectPool *priceLabelPool;
@property (readonly, nonatomic) IESECServiceProxy<IESECShopImageService> *imageService;
@property (readonly, nonatomic) IESECServiceProxy<IESECShopClientAiService> *clientAiService;

- (void)configureBackwardState;
- (void).cxx_destruct;
- (id)init;

@end
