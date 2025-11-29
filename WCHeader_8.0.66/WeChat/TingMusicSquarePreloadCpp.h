@class NSString;

@interface TingMusicSquarePreloadCpp : UnitRCObjcBaseProxyClass <TingMusicSquarePreload>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)preload:(id)a0;
- (void)discard:(id)a0;
- (id)getAndClearPreloadResponse;
- (id)readPreloadResponse;
- (void)onClientInsertionReceived:(id)a0;
- (void)readClientInsertionPatch:(id)a0 callback:(id /* block */)a1;
- (void)clearClientInsertionPatch;
- (void)applyClientInsertionPatchIfNeeded:(id)a0 discoverResponse:(id)a1 callback:(id /* block */)a2;

@end
