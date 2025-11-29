@class NSMutableDictionary, MMLiveTaskId, MMLiveTask;

@interface MMLiveInteractionGiftLuaScriptRenderLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (nonatomic) BOOL isRenderStart;
@property (nonatomic) unsigned long long renderSeq;
@property (retain, nonatomic) NSMutableDictionary *renderScriptDict;
@property (nonatomic) BOOL isGiftResourcePlaying;
@property (retain, nonatomic) NSMutableDictionary *resourcePinningTokens;
@property (copy, nonatomic) id /* block */ beginCallback;
@property (copy, nonatomic) id /* block */ endCallback;

+ (id)baseResourceDir;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultData;
- (BOOL)startLuaScriptRenderWithResPath:(id)a0;
- (id)getLuaScriptResourceIdVector;
- (void)removeLuaScriptResource:(id)a0;
- (BOOL)processLuaScriptJsonMessage:(id)a0 fromSourceId:(int)a1;
- (void)increaseRenderSeq;
- (void)startRenderWithResPath:(id)a0;
- (void)addRenderScriptWithResPath:(id)a0 completion:(id /* block */)a1;
- (void)removeLuaScriptResourceWithClearSrc:(long long)a0;
- (void)onScriptBegin:(long long)a0;
- (void)onScriptEnd:(long long)a0 withResult:(long long)a1 renderSeq:(unsigned long long)a2;
- (BOOL)checkIsCurrRender:(unsigned long long)a0;
- (void)clearTags;
- (void)registerRenderScriptId:(long long)a0 withResPath:(id)a1 renderSeq:(unsigned long long)a2;
- (void)unRegisterRenderScriptId:(long long)a0;
- (BOOL)isContainRenderScriptId:(long long)a0;
- (id)getRenderTaskWithScriptId:(long long)a0;
- (id)getAllRenderScriptIds;
- (void)createActualResPathWithInitialResPath:(id)a0 completion:(id /* block */)a1;
- (id)createActualResPathWithSuffix:(id)a0;
- (id)getScriptResourcePath:(id)a0;
- (void)removeResPath:(id)a0;
- (id)getLocalResourcePath;
- (void).cxx_destruct;

@end
