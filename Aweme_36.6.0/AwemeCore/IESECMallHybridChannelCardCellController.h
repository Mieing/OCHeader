@class IESECListKitListUpdater, NSString, UICollectionViewCell, IESECListKitItemDataModel;

@interface IESECMallHybridChannelCardCellController : NSObject <IESECListKitCellControllerProtocol>

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
+ (Class)cellClassWith:(unsigned long long)a0;
+ (Class)cellClass;

- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)didEndDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)beginRefreshSoloChannelCompletion:(id /* block */)a0;
- (void)enrichCellModel;
- (id)explicitCell;
- (id)explicitCellModel;
- (void).cxx_destruct;
- (id)init;

@end
