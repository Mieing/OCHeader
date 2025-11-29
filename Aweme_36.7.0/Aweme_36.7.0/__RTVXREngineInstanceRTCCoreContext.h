@class NSString, UIView;
@protocol RTVXRPreviewInterface;

@interface __RTVXREngineInstanceRTCCoreContext : NSObject

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) UIView<RTVXRPreviewInterface> *previewContainer;
@property (nonatomic) BOOL isAutoResumeVideoCapture;
@property (nonatomic) BOOL isNeedStopInteractBeforeStartInteract;
@property (nonatomic) BOOL isNeedRetryEnableSpeaker;
@property (nonatomic) BOOL isCurrentSpeakerEnable;

- (void).cxx_destruct;

@end
