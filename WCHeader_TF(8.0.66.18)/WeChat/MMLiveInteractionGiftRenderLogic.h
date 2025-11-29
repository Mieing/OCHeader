@class MMLiveTask, MMLiveInteractionGiftLuaScriptRenderLogic, MMLiveTaskId, MMLiveInteractionGiftMaterialRenderLogic;

@interface MMLiveInteractionGiftRenderLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (nonatomic) long long currentRenderType;
@property (retain, nonatomic) MMLiveInteractionGiftMaterialRenderLogic *materialRenderLogic;
@property (retain, nonatomic) MMLiveInteractionGiftLuaScriptRenderLogic *luaScriptRenderLogic;
@property (nonatomic) BOOL isRenderWillEnd;
@property (readonly, nonatomic) BOOL isGiftResourcePlaying;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultData;
- (void)createMaterialRenderLogic;
- (void)createLuaScriptRenderLogic;
- (BOOL)startInteractionGiftWithResPath:(id)a0;
- (id)getCurInteractionResourceIdVector;
- (void)removeInteractionResource:(id)a0;
- (long long)checkInteractionGiftRenderType:(id)a0;
- (void)onCurrRenderEnd;
- (void).cxx_destruct;

@end
