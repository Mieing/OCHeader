@interface DTFMutableSetting : NSObject

+ (id)getInstance;

- (id)backupURL;
- (id)gatewayURL;
- (id)headConfig;
- (id)DTFInitRequestOperationType;
- (id)validateRequestOperationType;
- (id)SMSVerifyRequestOperationType;
- (id)SMSCodeRequestOperationType;
- (id)zimOCRIdentifyRequestOperationType;
- (id)bioAuthEngineVersion;
- (id)onlinePubKey;
- (id)testPubKey;

@end
