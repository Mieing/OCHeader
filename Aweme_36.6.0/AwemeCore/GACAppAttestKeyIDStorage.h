@class NSString, NSUserDefaults;

@interface GACAppAttestKeyIDStorage : NSObject <GACAppAttestKeyIDStorageProtocol>

@property (readonly, nonatomic) NSString *keySuffix;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)storeAppAttestKeyID:(id)a0;
- (id)appAttestKeyIDFromStorage;
- (id)keyIDStorageKey;
- (id)setAppAttestKeyID:(id)a0;
- (id)getAppAttestKeyID;
- (id)initWithKeySuffix:(id)a0;
- (void).cxx_destruct;

@end
