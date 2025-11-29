@class NSString, LiveCore, IESLiveAudioSlice;
@protocol IESLivePerfSampler, IESLiveClientAIService;

@interface IESLiveASRManager : NSObject <IESLiveASRService>

@property (retain, nonatomic) LiveCore *liveCore;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveAudioSlice *audioSliceA;
@property (retain, nonatomic) IESLiveAudioSlice *audioSliceB;
@property (nonatomic) long long sliceCount;
@property (nonatomic) unsigned long long sliceAB;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) long long endLiveSliceTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didSetAttachingDIContext;
- (id)userService;
- (void)destroyASREngine:(id)a0;
- (void)setLiveCoreSesstion:(id)a0;
- (void)startASR;
- (void)cleanAudioSlice;
- (void)setupPrefSample:(id)a0;
- (id)currentAudienceVCRoomModel;
- (void)appDidEnterBackgroundASR;
- (void)appDidBecomeActiveASR;
- (BOOL)checkASRAvailable;
- (void).cxx_destruct;
- (id)init;

@end
