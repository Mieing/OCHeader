@class FMDatabase, AWEStorage, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFeedbackRecorder : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSMutableArray *parsers;
@property (retain, nonatomic) FMDatabase *db;

+ (void)awe_downloadRegisterParsers;
+ (void)recordForVideoDownload:(id)a0 code:(long long)a1;
+ (void)awe_studioRegisterParsers;
+ (void)recordForVideoUpload:(unsigned long long)a0 code:(long long)a1 stage:(long long)a2;
+ (void)recordForVideoMerge:(unsigned long long)a0 code:(long long)a1;
+ (void)recordForVideoRecord:(unsigned long long)a0 code:(long long)a1;
+ (void)recordForCameraInit:(unsigned long long)a0 code:(long long)a1;
+ (void)recordForSaveVideoDraft:(unsigned long long)a0 code:(long long)a1;
+ (void)recordForLoadVideoDraft:(unsigned long long)a0 code:(long long)a1;
+ (void)recordForDeleteVideoDraft:(unsigned long long)a0 code:(long long)a1;
+ (void)recordForTotalVideoDraft:(unsigned long long)a0 code:(long long)a1 draftCreationData:(id)a2;
+ (void)recordForVideoDraftTimeline:(unsigned long long)a0 code:(long long)a1 draftInfo:(id)a2 title:(id)a3;
+ (BOOL)enable;
+ (id)sharedRecorder;

- (void)recordForType:(long long)a0 label:(id)a1 code:(long long)a2 message:(id)a3;
- (void)registerParsers:(id)a0;
- (BOOL)initDB;
- (BOOL)insertRecordToDB:(long long)a0 label:(id)a1 code:(long long)a2 message:(id)a3;
- (id)fetchFromDB;
- (void).cxx_destruct;
- (id)dbPath;
- (id)init;
- (BOOL)cleanUp;
- (id)collect;
- (id)keyForType:(long long)a0;

@end
