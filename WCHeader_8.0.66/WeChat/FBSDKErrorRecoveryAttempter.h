@class NSString;

@interface FBSDKErrorRecoveryAttempter : NSObject <FBSDKErrorRecoveryAttempting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recoveryAttempterFromConfiguration:(id)a0;

- (void)completeRecovery:(BOOL)a0 delegate:(id)a1 didRecoverSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;

@end
