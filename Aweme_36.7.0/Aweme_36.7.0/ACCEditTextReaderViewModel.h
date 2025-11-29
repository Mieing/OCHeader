@class ACCCameraSubscription, ACCTextReadEffectSelectPanelModel, ACCEditTextReaderConfig, NSString, ACCVoiceCloneUtil;
@protocol ACCEditServiceProtocol, ACCTextReaderTrackerProtocol;

@interface ACCEditTextReaderViewModel : ACCEditViewModel <ACCEditTextReaderServiceProtocol>

@property (retain, nonatomic) ACCEditTextReaderConfig *triggleConfig;
@property (nonatomic) BOOL needPreCheck;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCTextReadEffectSelectPanelModel *panelModel;
@property (retain, nonatomic) id<ACCTextReaderTrackerProtocol> tracker;
@property (retain, nonatomic) ACCVoiceCloneUtil *cloneUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableVoiceClone;
+ (BOOL)supportTextRead:(id)a0 user:(id)a1;

- (void)cancelTextReaderRequest;
- (id)draftFolder;
- (id)getTextReaderModel:(id)a0;
- (BOOL)supportTextReading;
- (void)fetchTextReaderEffectPanel:(id /* block */)a0;
- (void)triggleTextReaderView:(id)a0;
- (void)triggleTextReaderView:(id)a0 needPreCheck:(BOOL)a1;
- (void)applyTextReader:(id)a0 startTime:(double)a1 completion:(id /* block */)a2;
- (void)removeTextReader:(id)a0;
- (void)updateTextReaderModel:(id)a0;
- (unsigned long long)textSupportReading:(id)a0;
- (void)willShowTextReaderView;
- (void)didShowTextReaderView;
- (void)willDismissTextReaderView;
- (void)didDismissTextReaderView;
- (void)setupRepoManagerIfNeeded;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
