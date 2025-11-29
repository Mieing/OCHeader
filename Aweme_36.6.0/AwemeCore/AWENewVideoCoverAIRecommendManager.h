@class VEAlgorithmSession, NSString, NLEProduceKitPipeline, NLEProduceKitFrameComponent, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface AWENewVideoCoverAIRecommendManager : NSObject <AWENewVideoCoverAIRecommendManagerProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) NLEProduceKitPipeline *pipeline;
@property (retain, nonatomic) NLEProduceKitFrameComponent *frameComponent;
@property (nonatomic) double extractStartTime;
@property (nonatomic) double extractTime;
@property (nonatomic) long long extractErrorCode;
@property (nonatomic) double uploadStartTime;
@property (nonatomic) double uploadTime;
@property (nonatomic) long long uploadErrorCode;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double requestTime;
@property (nonatomic) long long requestErrorCode;
@property (nonatomic) double finalTime;
@property (retain, nonatomic) NLEProduceKitFrameComponent *firstStageExtractFrameComponent;
@property (retain, nonatomic) VEAlgorithmSession *algSession;
@property (retain, nonatomic) NLEProduceKitFrameComponent *secondStageExtractFrameComponent;
@property (nonatomic) double localExtractStartTime1;
@property (nonatomic) double localExtractTime1;
@property (nonatomic) long long localExtractErrorCode1;
@property (nonatomic) double localExtractStartTime2;
@property (nonatomic) double localExtractTime2;
@property (nonatomic) long long localExtractErrorCode2;
@property (nonatomic) double coordinatesGenerateStartTime;
@property (nonatomic) double coordinatesGenerateTime;
@property (nonatomic) long long coordinatesGenerateErrorCode;
@property (nonatomic) double localFinalTime;
@property (nonatomic) BOOL cancelledByPublishBegan;
@property (copy, nonatomic) id /* block */ localRecommendcompletion;
@property (nonatomic) long long maxImageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableEditVideoCoverAIRecommend:(id)a0;
+ (BOOL)isAlbumVideoWithModel:(id)a0;
+ (BOOL)enableNewVideoCoverAIRecommend:(id)a0;
+ (void)fetchResourcesWithPublishViewModel:(id)a0;
+ (id)imageGeneratorBeats:(double)a0;

- (void)startAICoverRecommendUseLocalWithMaxImageCount:(long long)a0 completion:(id /* block */)a1;
- (void)startAICoverRecommendUseRemote;
- (BOOL)memoryOpt;
- (struct CGSize { double x0; double x1; })sizeForUploadWithShortLength:(double)a0;
- (BOOL)isRoughExportFrame;
- (void)trackAICoverRecommendFinishIfLocal:(BOOL)a0;
- (void)handleFirstStageExtractFrameFail:(id)a0;
- (void)insertScoreIndex:(id)a0 intoScoreIndexResult:(id)a1 scores:(id)a2;
- (void)sortScoreIndexResult:(id)a0 scores:(id)a1;
- (BOOL)isMemoryOpt2;
- (void)handleAICoverRecommendImages:(id)a0 timestamps:(id)a1 scores:(id)a2;
- (BOOL)originVideoIsPortrait;
- (void)tryGenerateCoverWithCoverList:(id)a0;
- (void)startAICoverRecommend;
- (void)stopAICoverRecommend;
- (id)initWithViewModel:(id)a0 editService:(id)a1;
- (void).cxx_destruct;
- (id)timestamps;

@end
