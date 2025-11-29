@class NSString;

@interface AWEAntiAddictChimeVideoListener : NSObject <AWEAntiAddictActionListener, AWEUserMessage, AWEBasicModeMessage, AWEDigitalWellbeingMessage>

@property (copy, nonatomic) id /* block */ triggerBeginBlock;
@property (copy, nonatomic) id /* block */ triggerEndBlock;
@property (copy, nonatomic) id /* block */ triggerRevokeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (long long)listenerType;
- (void)feedDidDisplayAntiAddictVideo:(id)a0;
- (void)chimeVideoActionShouldRevoke:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
