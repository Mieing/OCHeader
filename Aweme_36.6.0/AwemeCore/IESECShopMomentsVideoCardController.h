@class IESECListKitListUpdater, NSString, IESECListKitItemDataModel, UICollectionViewCell, IESECStorePageContext;
@protocol IESECStoreContainerProtocol;

@interface IESECShopMomentsVideoCardController : NSObject <IESECShopMomentsVideoCardDelegate, IESECListKitCellControllerProtocol>

@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (nonatomic) BOOL titleLabelExpanded;
@property (nonatomic) BOOL videoPlayerLandscapeMode;
@property (nonatomic) double videoPlayerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;
+ (id)titleLabelFont;

- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)cell:(id)a0 didTapVideoView:(id)a1 cellModel:(id)a2;
- (void)cell:(id)a0 didTapProdudctView:(id)a1 cellModel:(id)a2;
- (BOOL)enableNewCardStyleWithBffData:(id)a0;
- (BOOL)enableNewCardStyle;
- (void).cxx_destruct;

@end
