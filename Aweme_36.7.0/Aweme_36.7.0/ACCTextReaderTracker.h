@class NSDictionary, NSString, AWEVideoPublishViewModel;

@interface ACCTextReaderTracker : NSObject <ACCTextReaderTrackerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (id)aiMemoriesCommonParams;
- (id)defaultToneId;
- (id)initWithRepoContainer:(id)a0 extraParams:(id)a1;
- (void)logTextReadingComplete:(id)a0 speakerName:(id)a1 textType:(id)a2 extraParams:(id)a3;
- (id)commonParamsWithExtra:(id)a0;
- (void)appendTextReaderEffectInfo:(id)a0 effect:(id)a1;
- (void)logPanelShowExtraParams:(id)a0;
- (void)logClickTone:(id)a0 extraParams:(id)a1;
- (void)logCancelTone:(id)a0 extraParams:(id)a1;
- (void)logCollectTone:(id)a0 extraParams:(id)a1;
- (void)logCancelCollectTone:(id)a0 extraParams:(id)a1;
- (void)logClickToneTab:(id)a0 manually:(BOOL)a1;
- (void)logCancelPicking;
- (void)logConfirmPicking:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
