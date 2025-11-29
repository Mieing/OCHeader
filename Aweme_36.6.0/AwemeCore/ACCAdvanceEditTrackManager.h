@class DVEVCContext, NSString, AWEVideoPublishViewModel;
@protocol ACCAdvanceEditViewModelProtocol;

@interface ACCAdvanceEditTrackManager : NSObject <DVETrackEventProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (copy, nonatomic) NSString *sourceCommitID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (id)initWithPublishModel:(id)a0;
- (id)nleModel;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)trackEvent:(id)a0 eventParam:(id)a1 needCommonParams:(BOOL)a2;
- (void)updateVCContext:(id)a0;
- (void)p_trackClickVideoTrimEvent:(id)a0;
- (void)p_trackPreUnselectMusicEvent;
- (void)p_trackUnselectMusicEventFromDustbin;
- (void)p_trackClickTrimComplete:(id)a0;
- (void)p_trackClickTrimCancel:(id)a0;
- (id)p_commonParamsFromPublishModel;
- (id)p_previousEnterMethodTrack;
- (id)p_paramSyncMode;
- (void)p_calculatePicAndVideoCountParam:(id)a0;
- (id)p_clickTrimParams;
- (id)advanceEditEffectTrackParams;
- (id)basicTrackParamsGetter;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;

@end
