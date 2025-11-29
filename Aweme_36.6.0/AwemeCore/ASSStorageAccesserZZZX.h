@interface ASSStorageAccesserZZZX : NSObject

+ (void)clearStorage;
+ (void)saveStorageModel:(id)a0;
+ (id)loadStorageModelFromKeychain;
+ (id)loadPreviousApdid;
+ (id)getRandomizedID;
+ (id)getNewRadomizedID;
+ (id)getRadomizedClientKey;
+ (id)getClientKeyDataFormation:(id)a0;
+ (id)getRandomizedTokenID;
+ (id)getTokenIdDataFormation:(id)a0;
+ (id)loadLastLoginTime;
+ (void)saveCurrentLoginTime:(id)a0;
+ (void)saveApdidc:(id)a0;
+ (id)loadApdidc;
+ (id)loadLastTMXTime;
+ (void)saveTMXTime:(id)a0;
+ (id)loadTMXSessionID;
+ (void)saveTMXSessionID:(id)a0;
+ (void)saveGID:(id)a0;
+ (id)loadGID;
+ (void)saveJBErrorHistory:(id)a0;
+ (id)loadJBErrorHistory;
+ (id)getFromFile;
+ (id)getApdidcFromFile;
+ (void)saveArpMac:(id)a0;
+ (id)loadArpMac;
+ (void)saveDynamicKey:(id)a0;
+ (id)loadDynamicKey;
+ (void)saveLocalToken:(id)a0 keyName:(id)a1;
+ (id)loadLocalToken:(id)a0;
+ (id)loadEnvironmentMode;
+ (void)saveEnvironmentMode:(id)a0;

@end
