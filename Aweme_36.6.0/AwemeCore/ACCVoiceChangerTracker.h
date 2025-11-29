@class AWEVideoPublishViewModel;

@interface ACCVoiceChangerTracker : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;

- (id)initWithRepoContainer:(id)a0;
- (id)commonParamsWithExtra:(id)a0;
- (void)appendTextReaderEffectInfo:(id)a0 effect:(id)a1;
- (void)logPanelShowExtraParams:(id)a0;
- (void)logApplyEffect:(id)a0 extraParams:(id)a1;
- (void)logCollectEffect:(id)a0 extraParams:(id)a1;
- (void)logCancelCollectEffect:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
