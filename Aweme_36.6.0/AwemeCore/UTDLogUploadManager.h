@class NSString;

@interface UTDLogUploadManager : NSObject {
    BOOL isUploading;
    long long winSize;
    float averagePackageSize;
    struct dispatch_queue_s { } *_uploadQueue;
    struct dispatch_source_s { } *_timer;
    int _eidsLevel;
    int _eidsLevelAll;
}

@property long long uploadInterval;
@property (retain) NSString *uploadURL;

+ (id)sharedInstance;

- (void)startUploadLogic:(id)a0;
- (void)uploadLoop;
- (void)updateTimerInterval:(id)a0;
- (void)_runUploadTimerWithDelay:(unsigned long long)a0 interval:(unsigned long long)a1;
- (void)startUploadLogic;
- (long long)winSize;
- (void)updateAllLevel;
- (id)getEventIdsByLevel:(int)a0;
- (id)packageStreams:(id)a0;
- (id)compressStreams:(id)a0;
- (id)getUploadUrlByLevel:(int)a0;
- (void)dealWithRecData:(id)a0 list:(id)a1 size:(long long)a2 code:(long long)a3 startTime:(long long)a4;
- (void)adjustWinSize:(int)a0 bytes:(long long)a1 usingTime:(float)a2;
- (id)matchStream:(id)a0;
- (long long)mtu;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setUpdateTimer:(long long)a0;
- (id)gzipDeflate:(id)a0;

@end
