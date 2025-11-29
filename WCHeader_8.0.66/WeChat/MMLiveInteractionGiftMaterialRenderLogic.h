@class MMLiveTaskId, MMLiveTask;

@interface MMLiveInteractionGiftMaterialRenderLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (nonatomic) long long currentResourceObjectId;
@property (nonatomic) BOOL isGiftResourcePlaying;
@property (nonatomic) unsigned int resourcePlayTime;
@property (copy, nonatomic) id /* block */ beginCallback;
@property (copy, nonatomic) id /* block */ endCallback;

- (id)initWithTaskId:(id)a0;
- (BOOL)startMaterialRenderWithResPath:(id)a0;
- (id)getMaterialResourceIdVector;
- (void)removeMaterialResource:(id)a0;
- (void)setupAnimationCallback:(id)a0;
- (void).cxx_destruct;

@end
