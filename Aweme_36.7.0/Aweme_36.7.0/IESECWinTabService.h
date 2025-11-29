@class IESECListKitListModel, IESECWinTabListModel, UIView, IESECWinContext, NSString, NSMutableArray, IESECSlidingTabbarView, IESECServiceProxy, NSMapTable;
@protocol IESECWinCategoryService, IESECWinDataService, IESECWinOpportunityService, IESECWinGoodsService;

@interface IESECWinTabService : NSObject <IESECWinTabService> {
    NSMutableArray *_insertedUniqueIDs;
}

@property (retain, nonatomic) IESECWinTabListModel *selectTabList;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (weak, nonatomic) IESECWinContext *context;
@property (nonatomic) BOOL windowVaneRequestOnAir;
@property (nonatomic) BOOL hasInsertedFixedCard;
@property (retain, nonatomic) IESECListKitListModel *updatedListModel;
@property (nonatomic) BOOL isWindowAppeared;
@property (retain, nonatomic) IESECSlidingTabbarView *tabbarView;
@property (nonatomic) BOOL isFirstRequestSucceed;
@property (nonatomic) struct CGPoint { double x; double y; } tabCotainerOrigin;
@property (retain, nonatomic) NSMutableArray *productRefreshParams;
@property (retain, nonatomic) NSMapTable *goodsCellMap;
@property (retain, nonatomic) NSMapTable *goodsObjectMap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } benefitPanelFrame;
@property (weak, nonatomic) UIView *benefitPanelView;
@property (nonatomic) BOOL hasShownBenefitView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEqualTabWithType:(unsigned long long)a0 tabType2:(unsigned long long)a1 category1:(id)a2 category2:(id)a3 context:(id)a4;

- (BOOL)isShowTab;
- (BOOL)isShowBenefitPanel;
- (void)updateSelectTab:(id)a0 scene:(unsigned long long)a1;
- (id)tabListWithTabType:(unsigned long long)a0 categoryID:(id)a1;
- (void)requestInsertCards:(id)a0 index:(long long)a1;
- (id)getProductIDsWithRange:(long long)a0 index:(long long)a1;
- (id)bff_getProductIDsWithRange:(long long)a0 index:(long long)a1;
- (void)requestWinProductRefreshWithContext:(id)a0 completion:(id /* block */)a1;
- (void)updateGoodsObjectForLowPrice:(id)a0 withTagListMap:(id)a1;
- (void)cellShowIndex:(unsigned long long)a0 first:(BOOL)a1;
- (BOOL)needReturnNoProductTab;
- (void)bff_requestInsertCards:(id)a0 index:(long long)a1 gapCount:(long long)a2;
- (BOOL)shouldInsertCard:(id)a0;
- (BOOL)checkGapCount:(long long)a0 index:(unsigned long long)a1;
- (void)bff_doCardInsertAction:(id)a0;
- (id)bff_insertUniqueID:(id)a0 item:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
