@class NSString, NSMutableDictionary;

@interface MagicWeAppCardService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *frameSetItems;
@property (retain, nonatomic) NSMutableDictionary *host2biz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)startWithHostIfNeeded:(id)a0 fsPath:(id)a1;
- (void)stopWithHost:(id)a0;
- (void)bindFrameSetView:(id)a0 withBiz:(id)a1;
- (void)stopDirectly;
- (void)onCreateFrameSet:(id)a0 forHost:(id)a1 frameId:(unsigned int)a2;
- (void)sendOnInsertFrameFromHost:(id)a0 withFrameId:(unsigned int)a1 extraData:(id)a2;
- (void)sendOnRemoveFrameFromHost:(id)a0 withFrameId:(unsigned int)a1;
- (void)sendEventFromHost:(id)a0 withName:(id)a1 params:(id)a2;
- (id)getHostForBiz:(id)a0;
- (id)getBizForHost:(id)a0;
- (void)cacheBiz:(id)a0 forHost:(id)a1;
- (void)removeBizForHost:(id)a0;
- (void)cacheFrameSetItem:(id)a0 forHost:(id)a1 frameId:(unsigned int)a2;
- (void)removeCacheFrameSetItemForHost:(id)a0 frameId:(unsigned int)a1;
- (id)getFrameSetItemCacheForHost:(id)a0 frameId:(unsigned int)a1;
- (void)insertMagicBrushFrameForHost:(id)a0 withAppid:(id)a1 frameId:(unsigned int)a2 debugMode:(unsigned int)a3 pagePath:(id)a4 fsPath:(id)a5 extraData:(id)a6 completion:(id /* block */)a7;
- (void)removeMagicBrushFrameInHost:(id)a0 withFrameId:(unsigned int)a1;
- (void)postMessageToMagicBrushInHost:(id)a0 withFrameId:(unsigned int)a1 message:(id)a2 fromAppid:(id)a3;
- (void).cxx_destruct;

@end
