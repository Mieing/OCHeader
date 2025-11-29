@class NSString, AWEShareContext;

@interface AWEIMShareToSingleChatEventHandlerGameInviteImpl : NSObject <AWEIMShareToSingleChatEventHandlerProtocol>

@property (retain, nonatomic) AWEShareContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackBackflowWithStatusCode:(unsigned long long)a0 transferBack:(BOOL)a1;
- (void)sendGameInviteMessageWithContext:(id)a0;
- (void)sendPostScriptWithString:(id)a0 peerUid:(id)a1;
- (void)cancelShareWithShareContext:(id)a0 transferBack:(BOOL)a1;
- (void)shareFinishWithCompletedType:(unsigned long long)a0 postscript:(id)a1;
- (void)interrupShare;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;

@end
