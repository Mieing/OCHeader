@class IESECListKitListUpdater, NSString, UICollectionViewCell, IESECListKitItemDataModel;

@interface IESECShopProductsMemberCardController : NSObject <IESECListKitCellControllerProtocol>

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

- (void)handleClick;
- (void)configCell;
- (void)applyCoupon;
- (double)heightForModel:(id)a0 itemWidth:(double)a1;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (id)modelFromData:(id)a0;
- (void)trackMemberCardWithEventName:(id)a0 andExtraParams:(id)a1;
- (void)urgeUse;
- (void)updateProducts:(id)a0;
- (void).cxx_destruct;
- (void)updateTimestamp:(id)a0;

@end
