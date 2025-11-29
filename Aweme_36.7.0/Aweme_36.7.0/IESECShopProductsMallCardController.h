@class IESECListKitListUpdater, IESECListKitItemDataModel, NSString, IESECShopProductsMallCardEventHandler, UICollectionViewCell, IESECShopRecommendMallObject;

@interface IESECShopProductsMallCardController : NSObject <IESECListKitCellControllerProtocol> {
    IESECShopProductsMallCardEventHandler *_eventHandler;
}

@property (retain, nonatomic) IESECShopRecommendMallObject *cachedMallObject;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

@end
