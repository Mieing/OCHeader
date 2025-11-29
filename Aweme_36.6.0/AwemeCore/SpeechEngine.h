@class NSString, NSObject;
@protocol SpeechEngineDelegate, OS_dispatch_semaphore;

@interface SpeechEngine : NSObject {
    struct Engine { struct EngineImpl *x0; } *engine;
    struct Options { struct OptionsImpl *x0; } *options;
    struct SpeechEngineListener { void /* function */ **x0; id x1; } *listener;
}

@property (nonatomic) BOOL inited;
@property (retain, nonatomic) NSString *engineName;
@property (retain, nonatomic) NSString *ttsScenarioType;
@property (retain, nonatomic) NSString *recorderType;
@property (nonatomic) int ttsWorkMode;
@property (nonatomic) int enablePlayer;
@property (nonatomic) BOOL aecEnable;
@property (nonatomic) BOOL needResetAudioSession;
@property (nonatomic) BOOL needRestartAudioSession;
@property (nonatomic) BOOL needResumeOthersInterruptedPlayback;
@property (nonatomic) BOOL needRegisterBackgroundNotification;
@property (nonatomic) BOOL needRegisterInterruptionNotification;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitAudioPermission;
@property (nonatomic) BOOL recSetCategoryAlready;
@property (retain, nonatomic) NSString *recCategory;
@property (nonatomic) unsigned long long recOptions;
@property (nonatomic) BOOL playSetCategoryAlready;
@property (retain, nonatomic) NSString *playCategory;
@property (nonatomic) unsigned long long playOptions;
@property (weak, nonatomic) id<SpeechEngineDelegate> speechEngineDelegate;

+ (void)createSpeechEngineMonitorWithHostAppID:(id)a0 deviceID:(id)a1;
+ (id)getSpeechEngineMonitor;

- (int)initEngine;
- (void)addNotification;
- (BOOL)needRecorder;
- (void)audioInterruptionHandler:(id)a0;
- (void)configRecEnvironment:(id)a0;
- (void)recoverAudioSession;
- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)setStringParam:(id)a0 forKey:(id)a1;
- (void)setIntParam:(long long)a0 forKey:(id)a1;
- (int)sendDirective:(int)a0 data:(id)a1;
- (BOOL)needRecorder:(int)a0;
- (BOOL)checkRecEnvironment;
- (BOOL)needPlayer:(int)a0;
- (BOOL)checkPlayEnvironment;
- (int)sendDirective:(int)a0 data:(id)a1 privacyCert:(id)a2;
- (BOOL)checkRecEnvironmentWithPrivacyCert:(id)a0;
- (int)ProcessAudio:(short *)a0 length:(int)a1 isFinal:(BOOL)a2;
- (int)FetchResult:(int)a0 result:(id *)a1;
- (void)setRemoteView:(id)a0;
- (BOOL)createEngineWithDelegate:(id)a0;
- (void)setBoolParam:(BOOL)a0 forKey:(id)a1;
- (void)setDoubleParam:(double)a0 forKey:(id)a1;
- (BOOL)isEngineSupported:(id)a0;
- (int)sendDirective:(int)a0;
- (int)sendDirective:(int)a0 privacyCert:(id)a1;
- (int)feedAudio:(short *)a0 length:(int)a1;
- (int)ResetEngine;
- (int)FetchResult:(id *)a0;
- (id)FetchStringResult:(int)a0;
- (void).cxx_destruct;
- (void)destroyEngine;
- (void)appDidEnterBackground:(id)a0;
- (id)getVersion;
- (void)dealloc;
- (void)setDelegate:(id)a0;

@end
