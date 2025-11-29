@class NSString;
@protocol ACCRecordSwitchModeService;

@interface AWEAIGCSelectServiceServiceImpl : ACCRecorderViewModel <ACCAIGCSelectServiceProtocol>

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aigcClickTakeSameWithEffect:(id)a0 publishViewModel:(id)a1 trackParams:(id)a2;
- (void)aigcClickTakeSameWithEffect:(id)a0 effectId:(id)a1 publishViewModel:(id)a2 trackParams:(id)a3 extraPassInfo:(id)a4;
- (void)createNewEffectWithEffect:(id)a0 keyWords:(id)a1 trackParams:(id)a2;
- (void)clearAIGCInfo;
- (void)clearAIGCInfoWithDisableCancelMusic:(BOOL)a0;
- (id)getNormalTrackParams:(id)a0;
- (void).cxx_destruct;

@end
