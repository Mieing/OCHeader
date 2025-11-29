@class NSString, NSMutableDictionary, NSError;

@interface FBSDKLoginManagerLogger : NSObject {
    NSString *_identifier;
    NSMutableDictionary *_extras;
    NSString *_lastResult;
    NSError *_lastError;
    NSString *_authMethod;
    NSString *_loggingToken;
}

+ (id)loggerFromParameters:(id)a0;

- (id)initWithLoggingToken:(id)a0;
- (void)startSessionForLoginManager:(id)a0;
- (void)endSession;
- (void)startAuthMethod:(id)a0;
- (void)endLoginWithResult:(id)a0 error:(id)a1;
- (id)parametersWithTimeStampAndClientState:(id)a0 forAuthMethod:(id)a1;
- (void)willAttemptAppSwitchingBehavior;
- (void)systemAuthDidShowDialog:(BOOL)a0 isUnTOSedDevice:(BOOL)a1;
- (void)logNativeAppDialogResult:(BOOL)a0 dialogDuration:(double)a1;
- (id)clientStateForAuthMethod:(id)a0 andExistingState:(id)a1;
- (id)_parametersForNewEvent;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)logEvent:(id)a0 result:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
