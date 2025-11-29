@class NSString, NSMutableDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface BDUGPushStore : NSObject

@property (retain, nonatomic) NSUserDefaults *appGroupDefaults;
@property (copy, nonatomic) NSString *dataPath;
@property (retain, nonatomic) NSMutableDictionary *groupDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) NSString *appGroupsIdentifier;

+ (id)sharedStore;

- (void)flushToDisk;
- (void)sortAndReportLog:(id)a0;
- (void)reportNSEDownloadEvent;
- (void)reportNSEUpdatingError;
- (void)printNSELog;
- (void)reportNSEEvent;
- (void)setAppGroupsObject:(id)a0 forKey:(id)a1;
- (void)setHistoricalUserIDs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
