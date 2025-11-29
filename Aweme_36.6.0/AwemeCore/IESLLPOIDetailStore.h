@class IESLLRxReadonlyProperty, IESLLPOICollectObject, IESLLPOIAsyncUIResponse, NSMutableDictionary, NSDictionary, IESLLRxObservable, LLDitoPageContext, NSNumber;

@interface IESLLPOIDetailStore : IESLLRxBaseStore

@property (retain, nonatomic) NSMutableDictionary *cellHeights;
@property (retain, nonatomic) NSDictionary *lynxDatas;
@property (retain, nonatomic) IESLLPOICollectObject *collectObject;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *baseInfoRendered;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *topHeaderOffset;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *infoListHeight;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *constData;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *isViewAppear;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *isAwemeAppear;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *poiDetail;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *isFavorited;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *favoritedCount;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *contentYOffset;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *isShowFullScreenAwemeList;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *isShowStickyFooter;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *isShowLocationBottomBar;
@property (readonly, nonatomic) IESLLRxReadonlyProperty *showSimilarRecommendPOI;
@property (nonatomic) BOOL hasAsyncUIRequestEnded;
@property (retain, nonatomic) IESLLPOIAsyncUIResponse *asyncUIResponse;
@property (readonly, nonatomic) IESLLRxObservable *detailEvent;
@property (readonly, nonatomic) BOOL liveScene;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSNumber *borderRadius;
@property (weak, nonatomic) LLDitoPageContext *context;

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
