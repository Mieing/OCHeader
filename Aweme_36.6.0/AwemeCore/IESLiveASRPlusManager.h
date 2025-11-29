@class IESLiveSpeechASRMonitor, NSTimer, NSString, IESLiveSpeechEngineASRManager, NSObject, IESLiveASRChangeAPI, LiveCore, IESLiveAudioPlusSlice, NSMutableArray;
@protocol IESLivePerfSampler, OS_dispatch_queue, IESLiveClientAIService;

@interface IESLiveASRPlusManager : NSObject <IESLiveASRPlusService>

@property (weak, nonatomic) LiveCore *liveCore;
@property (retain, nonatomic) IESLiveSpeechEngineASRManager *engineManager;
@property (retain, nonatomic) IESLiveAudioPlusSlice *audioSliceA;
@property (retain, nonatomic) IESLiveAudioPlusSlice *audioSliceB;
@property (nonatomic) long long endLiveSliceTime;
@property (nonatomic) long long sliceCount;
@property (nonatomic) unsigned long long sliceAB;
@property (retain, nonatomic) NSMutableArray *audioAdoptArray;
@property (nonatomic) long long sameSlicePercent;
@property (nonatomic) BOOL enableDecode;
@property (nonatomic) BOOL hasFirstDecode;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveASRChangeAPI *closeASRAPI;
@property (retain, nonatomic) IESLiveSpeechASRMonitor *monitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioProcessQueue;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) NSTimer *fakePointTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didSetAttachingDIContext;
- (id)userService;
- (void)addNotifications;
- (BOOL)checkLiveTypeAvailable:(long long)a0;
- (void)setupASREngine;
- (void)destroyASREngine:(id)a0;
- (void)startASR;
- (void)setupPrefSample:(id)a0;
- (BOOL)isEngineReady;
- (void)cleanAudioSlice:(id)a0;
- (void)closeLiveDestroyASREngine;
- (id)currentAudienceVCRoomModel;
- (void)appDidEnterBackgroundASR;
- (void)appDidBecomeActiveASR;
- (BOOL)checkASRAvailable;
- (void)newDestroyASREngine:(id)a0;
- (void)registerPitayaASRManager;
- (void)registerFakePointTimer;
- (void)registerDecodeErrorCallback;
- (unsigned long long)isOverlapWithBegin:(long long)a0 end:(long long)a1 slice:(id)a2;
- (unsigned long long)isFirstWithBegin:(long long)a0 end:(long long)a1 slice:(id)a2;
- (void)fixSliceTimeEndWithBegin:(long long)a0 end:(long long)a1 slice:(id)a2;
- (void)closeServerASR;
- (void).cxx_destruct;
- (id)init;

@end
