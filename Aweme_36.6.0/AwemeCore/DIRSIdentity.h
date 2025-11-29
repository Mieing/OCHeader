@class NSString, DIRSContext, DIRSConcurrentCollection;

@interface DIRSIdentity : DIRSBasicModule <IRISParameterHandler, IRISModule> {
    BOOL _isIdentifierAvailable;
    BOOL keychainEnabled;
}

@property (retain, nonatomic) DIRSConcurrentCollection *userIDs;
@property (retain, nonatomic) DIRSConcurrentCollection *deviceIDs;
@property (readonly) BOOL isIdentifierAvailable;
@property (readonly) NSString *clientId;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (id)userIdentifiers;
- (void)_checkIdentifierAvailable;
- (id)_loadClientId;
- (id)_createClientId;
- (BOOL)_writeToFile:(id)a0;
- (void)setUserIdentifiers:(id)a0;
- (id)filePath;
- (void).cxx_destruct;
- (id)deviceIdentifiers;
- (void)commonInit;
- (void)setDeviceIdentifiers:(id)a0;
- (void)run;

@end
