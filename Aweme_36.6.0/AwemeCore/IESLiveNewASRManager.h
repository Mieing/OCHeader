@class IESLiveNewAudioSlice, NSString, SpeechEngine, IESLiveASRChangeAPI, LiveCore, NSMutableArray, NSTimer;
@protocol IESLivePerfSampler, IESLiveClientAIService;

@interface IESLiveNewASRManager : NSObject <IESLiveNewASRService>

@property (retain, nonatomic) LiveCore *liveCore;
@property (retain, nonatomic) SpeechEngine *engine;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (nonatomic) BOOL isAsrSDKReady;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL needUpdateModel;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *unzipModelPath;
@property (retain, nonatomic) IESLiveNewAudioSlice *audioSliceA;
@property (retain, nonatomic) IESLiveNewAudioSlice *audioSliceB;
@property (nonatomic) long long endLiveSliceTime;
@property (nonatomic) long long sliceCount;
@property (nonatomic) unsigned long long sliceAB;
@property (retain, nonatomic) NSMutableArray *audioAdoptArray;
@property (nonatomic) long long sameSlicePercent;
@property (nonatomic) BOOL enableDecode;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveASRChangeAPI *closeASRAPI;
@property (retain, nonatomic) NSTimer *fakePointTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didSetAttachingDIContext;
- (id)userService;
- (BOOL)p_setupAsrSDK;
- (BOOL)checkLiveTypeAvailable:(long long)a0;
- (void)setupASREngine;
- (void)destroyASREngine:(id)a0;
- (void)setLiveCoreSesstion:(id)a0;
- (void)startASR;
- (void)stopASR:(id)a0;
- (void)cleanAudioSlice;
- (void)uploadFinalASRResult;
- (void)setupPrefSample:(id)a0;
- (id)currentAudienceVCRoomModel;
- (void)appDidEnterBackgroundASR;
- (void)appDidBecomeActiveASR;
- (BOOL)checkASRAvailable;
- (void)newDestroyASREngine:(id)a0;
- (void)registerPitayaASRManager;
- (void)registerFakePointTimer;
- (unsigned long long)isOverlapWithBegin:(long long)a0 end:(long long)a1 slice:(id)a2;
- (unsigned long long)isFirstWithBegin:(long long)a0 end:(long long)a1 slice:(id)a2;
- (void)fixSliceTimeEndWithBegin:(long long)a0 end:(long long)a1 slice:(id)a2;
- (void)closeServerASR;
- (void)unzipModel;
- (void)requestModelsPathWithCompletion:(id /* block */)a0;
- (void)p_handleASRPrepareError:(id)a0;
- (void)p_handleASRPrepareSuccess;
- (void)unzipGuideTempZip:(id)a0 destination:(id)a1 retryCount:(int)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
