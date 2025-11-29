@class NSString;

@interface AWEStudioPostLaunchInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configPassthroughVideoEditorAB;
+ (unsigned long long)availableMemory;
+ (double)getTotalDiskSize;
+ (id)volumeString;
+ (void)enbleUploadNativeLogIfNeeded;
+ (void)injectNetSpeed;
+ (void)configBytebenchSDK;
+ (void)configTrackerWithDeviceID:(id)a0;
+ (void)collectionDeviceInfo;
+ (void)configEffectJSSDK;
+ (void)configBizAB;
+ (void)setupAIMemoriesEnviroment;
+ (void)configVideoEditorAB;
+ (void)p_configVideoEditorAB;
+ (void)launchIdleStudioTask;
+ (void)configUserDefaultsAB;
+ (id)getGLRenderString;
+ (double)_sysctlCGFloatForKey:(id)a0;
+ (void)p_updateConfigVideoEditor;
+ (id)p_configVideoEditorSavePath;
+ (id)readAbConfigPath;
+ (void)p_configVideoEditorABLoadOptWith:(id)a0;
+ (void)p_configVideoEditorOld:(BOOL)a0;
+ (void)p_configVideoEditorAbSaveWith:(id)a0 delay:(double)a1;
+ (void)execute;
+ (void)setup;


@end
