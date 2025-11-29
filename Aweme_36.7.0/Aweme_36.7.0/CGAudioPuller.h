@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CGAudioPuller : CGObject <CGCloudPlayerMessage, CGCloudPlayerStatusUpdateMessage, XPlayAudioPuller>

@property (retain) NSObject<OS_dispatch_source> *audioTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic) double startAudioRenderTimeMS;
@property (nonatomic) double totalAudioRenderTimeMS;
@property (nonatomic) BOOL audioPullerNeedStartWhenPublish;
@property (nonatomic) BOOL hasPublishAudioStream;
@property BOOL canPullAudioFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)startAudioPuller;
- (void)cancelAudioPuller;
- (BOOL)checkAudioCallbackDuration;
- (void)resumeAudioPuller;
- (void)suspendAudioPuller;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserPublishStreamAudio:(BOOL)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void)enableAudioPuller:(BOOL)a0;
- (void)_applicationDidEnterBackgroundNotification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_applicationDidBecomeActive;

@end
