@protocol ACCVideoEditChallengeBindService;

@interface AWEGenericTemplateApplyHashTagHandler : AWEGenericTemplateApplyBaseHandler

@property (weak, nonatomic) id<ACCVideoEditChallengeBindService> editChallengeBindService;

- (void)onWillApplyTemplate:(id)a0 config:(id)a1 targetModel:(id)a2 preprocessParams:(id)a3;
- (void).cxx_destruct;

@end
