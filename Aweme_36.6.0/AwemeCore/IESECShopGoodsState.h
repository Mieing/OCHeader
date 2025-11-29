@class UIViewController, NSString, IESECShopGoodsEventHandler, IESECStorePageContext;
@protocol IESECShopPageContextV2, IESECStoreContainerProtocol, IESECShopGoodsViewControllerProtocol, IESECShopProductsDataSource;

@interface IESECShopGoodsState : NSObject

@property (retain, nonatomic) IESECStorePageContext *storePageContext;
@property (retain, nonatomic) id<IESECShopPageContextV2> storePageContextV2;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (nonatomic) long long tabStyle;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *shopExtraStatusType;
@property (weak, nonatomic) id<IESECShopProductsDataSource> dataSource;
@property (nonatomic, getter=isCompressingInformationForCart) BOOL compressingInformationForCart;
@property (weak, nonatomic) UIViewController<IESECShopGoodsViewControllerProtocol> *viewController;
@property (weak, nonatomic) IESECShopGoodsEventHandler *eventHandler;

- (id)ecomEntranceForm;
- (id)productForm;
- (id)productFormWithSwitchButton:(id)a0;
- (void).cxx_destruct;

@end
