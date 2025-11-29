@class NSString;

@interface AWELoginSourceTracker : NSObject <HTSAccountMessage, AWEUserMessage, AWELoginSourceTrackerProtocol>

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didCancelLogin;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)trackSource:(id)a0 position:(id)a1;
- (void)didFinishLogin:(BOOL)a0 platform:(unsigned long long)a1 error:(id)a2;
- (void)trackSource:(id)a0 position:(id)a1 type:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_reset;
- (void)start;
- (void)dealloc;

@end
