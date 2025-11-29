@interface ASSStorageAccesser : NSObject

+ (void)clearStorage;
+ (void)saveStorageModel:(id)a0;
+ (id)loadStorageModelFromKeychain;
+ (id)loadPreviousApdid;
+ (id)getRandomizedID;
+ (id)getNewRadomizedID;
+ (id)loadLastLoginTime;
+ (void)saveCurrentLoginTime:(id)a0;
+ (void)saveApdidc:(id)a0;
+ (id)loadApdidc;
+ (void)saveGID:(id)a0;
+ (id)loadGID;
+ (void)saveJBErrorHistory:(id)a0;
+ (id)loadJBErrorHistory;
+ (id)getFromFile;
+ (id)getApdidcFromFile;
+ (void)saveTrustData:(id)a0;
+ (id)loadTrustData;

@end
