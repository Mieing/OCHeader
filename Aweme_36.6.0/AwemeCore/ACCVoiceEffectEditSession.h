@class NSString, IESEffectModel, NSMutableArray, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface ACCVoiceEffectEditSession : NSObject <ACCEditPreviewMessageProtocol>

@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (nonatomic) double applyStartTime;
@property (nonatomic) double previewStopTime;
@property (copy, nonatomic) id /* block */ previewCompletion;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NSMutableArray *segments;
@property (nonatomic) long long initialSegmentCount;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)playStatusChanged:(long long)a0;
- (void)startPreviewEffect:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)stopPreviewWithCompletion:(id /* block */)a0;
- (void)startTemporaryEffect:(id)a0;
- (void)stopTemporaryEffect;
- (void)updateVoiceEffectsWithCompletion:(id /* block */)a0;
- (id)audioFilterForEffectSegment:(id)a0;
- (id)effectPathForEffect:(id)a0;
- (void)stopPreviewIfShould;
- (void)movieDidChangePlaytime:(double)a0;
- (id)initWithEditService:(id)a0 publishViewModel:(id)a1;
- (void)loadSegments:(id)a0;
- (id)currentSegments;
- (void)startApplyEffect:(id)a0;
- (void)stopApplyEffectWithCompletion:(id /* block */)a0;
- (void)cancelActionsAndSeekBackCompletion:(id /* block */)a0;
- (void)revokeLastEffect;
- (BOOL)hasNewEdits;
- (void)movieDidChangePlayStatus:(long long)a0;
- (void).cxx_destruct;

@end
