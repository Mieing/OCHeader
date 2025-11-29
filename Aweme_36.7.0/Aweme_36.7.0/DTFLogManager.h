@class NSMutableDictionary, NSTimer, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DTFLogManager : NSObject {
    NSObject<OS_dispatch_queue> *_writeLogQueue;
    NSMutableArray *_crashTimestampArray;
    BOOL _uploadableByServer;
    NSMutableDictionary *_bizTypeDictionary;
    NSMutableDictionary *_externalSwitchDict;
    unsigned long long _bgTask;
    NSTimer *_bgTaskKillTimer;
    NSMutableSet *_uploadingIndex;
    id /* block */ _logCallback;
}

@property (copy, nonatomic) id /* block */ networkUploadBlock;

+ (void)setLogCallback:(id /* block */)a0;
+ (id)sharedInstance;

- (void)startUploadLog;
- (void)setupTimeForCheckFileSize;
- (void)writeLogWithContext:(id)a0;
- (void)uploadData:(id)a0 bizType:(id)a1 completionBlock:(id /* block */)a2;
- (id)MPLogGetLogServerURL;
- (void)uploadUnsyncLogInFile:(id)a0 bizType:(id)a1;
- (void)unitDataInArray:(id)a0 bizType:(id)a1 count:(long long)a2;
- (void)uploadLogFileInArray:(id)a0 bizType:(id)a1;
- (void)flushAllLog;
- (void)uploadLogInArray:(id)a0 bizType:(id)a1;
- (BOOL)checkDate:(id)a0 inCrashTimestmpArray:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
