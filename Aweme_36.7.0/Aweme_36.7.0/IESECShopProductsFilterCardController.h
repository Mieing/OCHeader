@class UIView, NSString, IESECListKitListUpdater, IESECListKitItemDataModel, NSMutableSet, IESECShopProductsHybridContext, IESECServiceProxy, UICollectionViewCell;
@protocol IESECShopTopTabService;

@interface IESECShopProductsFilterCardController : NSObject <IESECShopProductFilterCellDelegate, IESECListKitCellControllerProtocol> {
    IESECShopProductsHybridContext *_context;
}

@property (weak, nonatomic) UIView *switchBubbleView;
@property (retain, nonatomic) NSMutableSet *selectedSortTypes;
@property (readonly, nonatomic) IESECShopProductsHybridContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *topTabService;
@property (nonatomic) BOOL shouldShowExpendView;
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

- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1;
- (void)showSubTag:(id)a0;
- (void)clickSubTag:(id)a0;
- (void)selectButtonShowed:(id)a0;
- (void)selectPanelButtonShowed;
- (void)selectPanelButtonTapped;
- (void)toggleExpendViewShow:(BOOL)a0 isRefreshing:(BOOL)a1;
- (void)expendViewUpdateWithSubModel:(id)a0;
- (void)refreshWithSelectedSortModel:(id)a0 order:(long long)a1;
- (void)switchButtonShowed:(id)a0;
- (void)switchButtonTapped:(id)a0 newConfig:(id)a1;
- (void)showSwitchButtonBubble:(id)a0 anchorView:(id)a1 withConfig:(id)a2;
- (void)PromotionFilterShowed:(id)a0 bigMoveToTop:(BOOL)a1;
- (void)promotionButtonTapped:(id)a0 bigMoveToTop:(BOOL)a1;
- (void)updateSwitchButtonBubbleFreqCtrl:(id)a0;
- (void)updateTimestampWithSortModel:(id)a0;
- (void)selectButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
