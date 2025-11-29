@class SAMICore, AWESearchAIGCSAMIAuthConfig, NSString, AWESearchAIGCSAMIAssistantCallback;
@protocol AWESearchAIGCSAMIAssistantHandleDelegate;

@interface AWESearchAIGCSAMIAssistantHandle : NSObject <SAMICoreCallbackListener>

@property (retain, nonatomic) AWESearchAIGCSAMIAssistantCallback *callback;
@property (retain, nonatomic) AWESearchAIGCSAMIAuthConfig *authConfig;
@property (retain, nonatomic) SAMICore *coreHandle;
@property (weak, nonatomic) id<AWESearchAIGCSAMIAssistantHandleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMessageReceived:(long long)a0 withBlock:(id)a1;
- (void)startTask;
- (void)createHandle;
- (void)destroyHandle;
- (void)callBackAssistantEvent:(id)a0;
- (BOOL)setHandlePropertyWithName:(id)a0 property:(id)a1;
- (id)initWithAuthConfig:(id)a0 delegate:(id)a1;
- (void)updateTTSConfig:(id)a0;
- (void)startSessionWithTask:(id)a0;
- (void)startTTSWithTask:(id)a0;
- (void)cancelSessionWithTask:(id)a0;
- (void)createConnection;
- (void).cxx_destruct;
- (void)closeConnection;
- (void)finishTask;
- (void)dealloc;

@end
