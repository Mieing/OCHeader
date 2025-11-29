@class AWESearchAIGCResultBaseViewController;

@interface AWESearchAIGCLongPressVoiceEntranceManager : NSObject

@property (weak, nonatomic) AWESearchAIGCResultBaseViewController *currentAigcVC;
@property (nonatomic) BOOL isInVoiceLongPress;

+ (id)sharedInstance;

- (void)handleAIGCForLongPressWithGestureRecognizer:(id)a0 extraParams:(id)a1;
- (void)handleAIGCJumpAfterCheckMicroPhoneAuth:(BOOL)a0 hasGranted:(BOOL)a1 gestureRecognizer:(id)a2 extraParams:(id)a3;
- (void)checkMicroPhoneAuthWithExtraParams:(id)a0 completion:(id /* block */)a1;
- (void)jumpToAIGCResultPage:(id)a0 showVoiceMiddlePage:(BOOL)a1;
- (void)jumpToAIGCResultPage:(id)a0 showVoiceMiddlePage:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
