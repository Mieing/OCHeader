@class AWEEcomAISearchResultStreamDataManager, NSString, AWEEcomSearchASRManager, AWETrackerContext, AWEEcomAISearchResultInputBoxModel;
@protocol AWEEcomAISearchResultSuspensionLayerViewModelDelegate;

@interface AWEEcomAISearchResultSuspensionLayerViewModel : NSObject <AWEEcomSearchASRManagerDelegate, AWEEcomAISearchResultSuspensionLayerViewModelProtocol>

@property (retain, nonatomic) AWEEcomSearchASRManager *asrManager;
@property (nonatomic) BOOL isRecording;
@property (weak, nonatomic) id<AWEEcomAISearchResultSuspensionLayerViewModelDelegate> delegate;
@property (copy, nonatomic) id /* block */ getInputBoxModel;
@property (copy, nonatomic) id /* block */ triggerSearch;
@property (copy, nonatomic) id /* block */ getTrackerContext;
@property (copy, nonatomic) id /* block */ getStreamDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEEcomAISearchResultInputBoxModel *inputBox;
@property (readonly, nonatomic) AWETrackerContext *trackerContext;
@property (readonly, nonatomic) AWEEcomAISearchResultStreamDataManager *streamDataManager;

- (void)engineDidStart:(id)a0;
- (void)engineDidStop:(id)a0;
- (void)engineReceiveError:(id)a0;
- (void)engineReceivePartialResult:(id)a0;
- (void)startRecognition;
- (void)handleInputBoxEvent:(id)a0 params:(id)a1;
- (void)registerEventForAnnieXView:(id)a0;
- (void)annieXViewDidCreate;
- (void)triggerInputForProductInquiry:(id)a0;
- (void)sendToAnnieXViewWithEvent:(id)a0 params:(id)a1;
- (void)checkMicroPhoneAuthWithCompeletion:(id /* block */)a0;
- (void)engineReceiveFinalResult:(id)a0;
- (id)asrConfig;
- (void)handleUpdateCard:(id)a0 location:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
