@class MMLiveStorageCleanupPinningToken, NSString, MMLiveTask, MMLiveTaskId, MMLiveWevisionWidgetObj;

@interface MMLiveWevisionWidgetRenderTask : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) NSString *renderTaskId;
@property (retain) MMLiveWevisionWidgetObj *widget;
@property (nonatomic) int prior;
@property (nonatomic) unsigned long long renderState;
@property (nonatomic) long long renderScriptId;
@property (nonatomic) BOOL isStartRender;
@property (nonatomic) unsigned int renderVersion;
@property (nonatomic) BOOL isEnding;
@property (copy, nonatomic) id /* block */ endCompletion;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcePinningToken;
@property (readonly, nonatomic) NSString *instanceId;

+ (id)baseResourceDir;

- (id)initWithWidget:(id)a0 prior:(int)a1 taskId:(id)a2;
- (void)updateAttributesFromWidget:(id)a0;
- (void)updatePrior:(int)a0;
- (void)render;
- (void)endRender:(id /* block */)a0;
- (void)createResources:(id /* block */)a0;
- (void)addRenderScript:(id /* block */)a0;
- (void)sendRenderMessage:(id /* block */)a0;
- (void)removeRenderScript:(id /* block */)a0;
- (void)clearResources:(id /* block */)a0;
- (void)increaseRenderVersion;
- (BOOL)checkNeedRender;
- (BOOL)checkIsEnding;
- (void)endComplete;
- (BOOL)isCurrentRenderStateInPre;
- (BOOL)clearResourcesIfNeeded;
- (BOOL)adjustRenderJsonConfig;
- (id)getTemplateResourcePath;
- (id)getActualResourcePath;
- (id)getRenderJsonConfigFilePath;
- (id)getRenderFrameDirPath;
- (id)getRenderFrameTextureFileName;
- (void).cxx_destruct;

@end
