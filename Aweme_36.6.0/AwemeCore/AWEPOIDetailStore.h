@class AWEPOIAsyncUIResponse, AWEPOICollectObject, DitoPageContext, NSMutableDictionary, NSDictionary, AWERxObservable, AWERxReadonlyProperty, NSNumber;

@interface AWEPOIDetailStore : AWERxBaseStore

@property (retain, nonatomic) NSMutableDictionary *cellHeights;
@property (retain, nonatomic) NSDictionary *lynxDatas;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (readonly, nonatomic) AWERxReadonlyProperty *baseInfoRendered;
@property (readonly, nonatomic) AWERxReadonlyProperty *topHeaderOffset;
@property (readonly, nonatomic) AWERxReadonlyProperty *infoListHeight;
@property (readonly, nonatomic) AWERxReadonlyProperty *constData;
@property (readonly, nonatomic) AWERxReadonlyProperty *isViewAppear;
@property (readonly, nonatomic) AWERxReadonlyProperty *isAwemeAppear;
@property (readonly, nonatomic) AWERxReadonlyProperty *poiDetail;
@property (readonly, nonatomic) AWERxReadonlyProperty *isFavorited;
@property (readonly, nonatomic) AWERxReadonlyProperty *favoritedCount;
@property (readonly, nonatomic) AWERxReadonlyProperty *contentYOffset;
@property (readonly, nonatomic) AWERxReadonlyProperty *isShowFullScreenAwemeList;
@property (readonly, nonatomic) AWERxReadonlyProperty *isShowStickyFooter;
@property (readonly, nonatomic) AWERxReadonlyProperty *isShowLocationBottomBar;
@property (readonly, nonatomic) AWERxReadonlyProperty *showSimilarRecommendPOI;
@property (nonatomic) BOOL hasAsyncUIRequestEnded;
@property (retain, nonatomic) AWEPOIAsyncUIResponse *asyncUIResponse;
@property (readonly, nonatomic) AWERxObservable *detailEvent;
@property (readonly, nonatomic) BOOL liveScene;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSNumber *borderRadius;
@property (weak, nonatomic) DitoPageContext *context;

+ (id)p_sharedFavoritedStateOfPoiId:(id)a0;

- (BOOL)dispatchAction:(id)a0 completion:(id /* block */)a1;
- (BOOL)setState:(id)a0 withValue:(id)a1 context:(id)a2;
- (void)updateCellHeightsWithCellKey:(id)a0 height:(double)a1;
- (id)initWithModule:(id)a0 poiId:(id)a1;
- (void)p_bindStateWithPoiId:(id)a0;
- (void)handleOuterFavorateActionNotification:(id)a0;
- (void)p_favoriteWithContext:(id)a0;
- (void)showSimilarPOIWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)showCollectGuideIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;

@end
