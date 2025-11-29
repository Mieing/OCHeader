@class NSString, UIViewController, AWESearchAIGCFlowVoiceInputOverlayView;
@protocol AWESearchAIGCInputServiceDelegate;

@interface AWESearchAIGCInputService : NSObject <AWESearchAIGCInputServiceProtocol>

@property (weak, nonatomic) UIViewController<AWESearchAIGCInputServiceDelegate> *container;
@property (retain, nonatomic) AWESearchAIGCFlowVoiceInputOverlayView *flowVoiceInputOverlayView;
@property (nonatomic) BOOL isInputTimeout;
@property (nonatomic) BOOL voiceInputInterrupted;
@property (nonatomic) long long vosDuration;
@property (copy, nonatomic) NSString *voiceId;
@property (nonatomic) BOOL isVoiceInputEntranceLongPressInHotArea;
@property (copy, nonatomic) NSString *searchExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)middlePageType;
- (void)searchAIGCVoiceInputEntranceLongPressBegan;
- (void)searchAIGCVoiceInputEntranceLongPressEnd;
- (void)searchAIGCVoiceInputEntranceLongPressCancel;
- (void)searchAIGCVoiceInputEntranceLongPressMoveOutHotArea;
- (void)searchAIGCVoiceInputEntranceLongPressMoveInHotArea;
- (void)searchAIGCVoiceInputEntranceMicrophoneAuthStatus:(BOOL)a0;
- (void)searchAIGCVoiceInputEntranceWillSetupHandlerWithVosId:(id)a0;
- (void)searchAIGCVoiceInputEntranceProcessInterrupted;
- (void)searchAIGCVoiceInputEntranceASRDisconnected;
- (void)searchAIGCVoiceInputEntranceASRInputTimeout;
- (void)searchAIGCVoiceInputEntranceASRFailed;
- (void)searchAIGCVoiceInputEntranceASRTranslate:(id)a0 isInterIM:(BOOL)a1 isSoftFinished:(BOOL)a2 vosDuration:(long long)a3 searchExtra:(id)a4;
- (void)searchAIGCVoiceInputEntranceASRFinished:(id)a0;
- (void)searchAIGCVoiceInputEntranceASRCancel;
- (id)searchAIGCVoicePanelParentView;
- (id)voiceAsrExtra;
- (void)attachFlowVoiceInputOverlayView;
- (void)detachFlowVoiceInputOverlayView;
- (void)sendWithASRText:(id)a0;
- (id)getASRExtraLogParams;
- (id)getHistoryConfig;
- (id)getHistoryWordsWithConfig:(id)a0;
- (long long)historyWordsLimit;
- (id)historyWordsFormatTransform:(id)a0;
- (void)searchAIGCInputView:(id)a0 sendWithContent:(id)a1 isRevise:(BOOL)a2 clickRegion:(unsigned long long)a3 inputMode:(unsigned long long)a4 localAppendParams:(id)a5 extra:(id)a6;
- (id)searchAIGCInputView:(id)a0 showOnViewWithType:(unsigned long long)a1 topMargin:(double *)a2;
- (void)searchAIGCInputView:(id)a0 showFeedRSPanel:(id)a1;
- (void)searchAIGCInputView:(id)a0 removeFeedRSPanel:(id)a1;
- (void).cxx_destruct;
- (id)inputView;
- (id)initWithContainer:(id)a0;

@end
