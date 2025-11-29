@class NSDictionary, NSString, NSLock;

@interface AppMonitorConfigSystem : NSObject

@property (retain, nonatomic) NSDictionary *systemDict;
@property (retain, nonatomic) NSDictionary *defaultSystemDict;
@property (copy, nonatomic) NSString *hotpatchVersion;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) int orangeUploadInterval;
@property (nonatomic) BOOL useUT;
@property BOOL discardAp;
@property (nonatomic) int cacheFlushInterval;
@property (nonatomic) int cacheTriggeCount;
@property (nonatomic) int uploadInterval;

+ (id)sharedInstance;

- (int)cacheTriggeCount:(id)a0;
- (id)reflectHotpatchVersion;
- (void)tbHotpatchDownloadRunPatch:(id)a0;
- (id)restoreHotpatchVersion;
- (void)setDicContent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
