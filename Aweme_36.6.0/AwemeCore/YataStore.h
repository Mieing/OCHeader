@class YYDiskCache, NSMutableDictionary, NSString;
@protocol YataState, YataInstanceInnerInterface;

@interface YataStore : NSObject <YataStore>

@property (retain, nonatomic) id<YataState> state;
@property (copy, nonatomic) id /* block */ dispatchFunction;
@property (copy, nonatomic) id /* block */ reducer;
@property (retain, nonatomic) NSMutableDictionary *subscriptions;
@property (nonatomic) BOOL isDispatching;
@property (nonatomic) BOOL autoSkipRepeats;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (retain, nonatomic) YYDiskCache *diskCache;
@property (nonatomic) BOOL isUpdateStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nodesDictWithNodeNameArray:(id)a0;
- (id)renderNodesWithNodeName:(id)a0;
- (id)renderNodesWithPositionInMainRenderNodeList:(id)a0;
- (BOOL)setData:(id)a0 forKeyPath:(id)a1 inDict:(id)a2;
- (id)renderNodeWithNodeKey:(id)a0;
- (void)setYataLocalData:(id)a0;
- (id)getYataLocalData;
- (void)dispatchRenderActionWithData:(id)a0 eventTrigger:(id)a1 triggerSource:(unsigned long long)a2;
- (id)allRenderNodeFields;
- (id)renderNodeFieldsWithNodeName:(id)a0;
- (void)applyProtocolFromStore:(id)a0 error:(id *)a1;
- (void)saveProtocolToStore:(id)a0 error:(id *)a1;
- (id)popupRenderNodeWithRenderNodeKey:(id)a0;
- (id)allRenderNodes;
- (id)updateDataFieldsWithElementKey:(id)a0 fieldKey:(id)a1 value:(id)a2;
- (id)findPopupNodeKeyWithPopupCode:(id)a0;
- (id)initWithReducer:(id /* block */)a0 state:(id)a1 middlewares:(id)a2;
- (id)initWithReducer:(id /* block */)a0 state:(id)a1 middlewares:(id)a2 autoSkipRepeats:(BOOL)a3 yataInstance:(id)a4;
- (id)internalDefaultDispatch:(id)a0;
- (void)subscribe:(id)a0 withTransform:(id)a1;
- (void)internalSubscribe:(id)a0 orginal:(id)a1 transformed:(id)a2;
- (void)dispatchRenderActionWithData:(id)a0 eventTrigger:(id)a1 triggerSource:(unsigned long long)a2 reloadAll:(BOOL)a3;
- (id)structNodesWithFilter:(id /* block */)a0;
- (id)popupStructNodesWithFilter:(id /* block */)a0;
- (id)renderNodesWithFilter:(id /* block */)a0;
- (id)popupStructNodeWithFinder:(id /* block */)a0;
- (id)structNodeWithFinder:(id /* block */)a0;
- (id)initWithReducer:(id /* block */)a0 state:(id)a1;
- (id)adjustState;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)renderState;
- (void)unsubscribe:(id)a0;
- (id)getState;
- (id)dispatch:(id)a0;
- (void)dealloc;

@end
