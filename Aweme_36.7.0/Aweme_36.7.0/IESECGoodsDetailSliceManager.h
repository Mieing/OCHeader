@class IESECGoodsDetailSliceGlobalProps, NSMutableDictionary, IESECGoodsDetailSliceXEventHandler, NSMutableArray;
@protocol IESECSliceXInstanceInterface;

@interface IESECGoodsDetailSliceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *registerCellDict;
@property (retain, nonatomic) NSMutableDictionary *sliceHeightDict;
@property (retain, nonatomic) IESECGoodsDetailSliceGlobalProps *globalProps;
@property (retain, nonatomic) NSMutableArray *dfsAsyncFetchDataList;
@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceInstance;
@property (retain, nonatomic) IESECGoodsDetailSliceXEventHandler *sliceXEventHandler;

- (void)sliceXViewHitTestPassthroughRoot:(id)a0;
- (void)triggerActions:(id)a0;
- (void)setupPageVC:(id)a0;
- (id)getSliceViewWithSlice:(id)a0 fitWidth:(double)a1;
- (double)getSliceHeightWithSlice:(id)a0 fitWidth:(double)a1;
- (void)bindSliceViewWithSlice:(id)a0;
- (BOOL)hasRegisterCell:(id)a0;
- (id)sliceGlobalDataWithKey:(id)a0;
- (void)handleSliceShowActionWithStorage:(id)a0;
- (id)getSliceViewWithSlice:(id)a0;
- (void)preloadSliceXResource;
- (void)updateMetaModel:(id)a0;
- (void)handleAsyncFetchSliceData:(id)a0 banRefresh:(BOOL)a1;
- (void)handleTakeoutLynxListenerAction:(id)a0;
- (void)clearDfsAsyncFetchSliceList;
- (void)updatePageIdentifier:(id)a0;
- (void)updateGlobalWithActionType:(long long)a0 data:(id)a1;
- (void)updateCommonMeta:(id)a0;
- (void)updateSkuMeta:(id)a0;
- (void)triggerActions:(id)a0 activeView:(id)a1;
- (id)preloadSlcView:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
