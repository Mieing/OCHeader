@class NSTimer, AWEIMMessageConversation, NSString;

@interface AWEIMInputStateManager : NSObject

@property (nonatomic) BOOL shouldReportInputState;
@property (nonatomic) double reportInterval;
@property (retain, nonatomic) NSTimer *reportTimer;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSString *currentText;
@property (nonatomic) BOOL isKeyboardActive;
@property (nonatomic) BOOL markSendSuccess;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (id)conversationDataManager;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)p_clearTimer;
- (BOOL)p_checkMsgIsValid:(id)a0;
- (void)p_startCountdownWithMessageIfNeeded:(id)a0;
- (double)getMaxInterval;
- (void)p_resetReportInputStatus;
- (void)updateReportStateWithInitialMessageList:(id)a0;
- (void)updateReportStateWithNewMessage:(id)a0;
- (void)p_reportInputState;
- (void)reportInputStateWithText:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (id)initWithConversation:(id)a0;

@end
