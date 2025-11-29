@class AWEVideoPublishViewModel, NSString, RACSubject;

@interface ACCBeautyTrackerSender : ACCTrackerSender <ACCBeautyTrackSenderProtocol>

@property (retain, nonatomic) RACSubject *beautySwitchButtonClickedSignal;
@property (retain, nonatomic) RACSubject *modernBeautyButtonClickedSignal;
@property (retain, nonatomic) RACSubject *flowServiceWillStartRecordSignal;
@property (retain, nonatomic) RACSubject *flowServiceDidCompleteRecordSignal;
@property (retain, nonatomic) RACSubject *composerBeautyViewControllerDidSwitchSignal;
@property (retain, nonatomic) RACSubject *beautyDataFetchCompleteSignal;
@property (copy, nonatomic) id /* block */ getPublishModelBlock;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendFlowServiceDidCompleteRecordSignal;
- (void)sendFlowServiceWillStartRecordSignal;
- (void)sendBeautySwitchButtonClickedSignal:(BOOL)a0;
- (void)sendModernBeautyButtonClickedSignal;
- (void)sendBeautyDataFetchCompleteSignal;
- (void)sendComposerBeautyViewControllerDidSwitchSignal:(BOOL)a0 isManually:(BOOL)a1;
- (void).cxx_destruct;

@end
