@class NSMutableArray, NSString, NSDictionary, NSMutableSet, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface TraceMeta : NSObject {
    BOOL _enable;
    BOOL _running;
    BOOL _zip;
    BOOL _uploadOnStart;
    BOOL _disableProfiler;
    BOOL _dumpQueueName;
    int _appState;
    int _type;
    int _timeout;
    int _maxRecords;
    int _bufferSize;
    int _toBeUploaded;
    long long _appStateTime;
    long long _startTime;
    long long _endTime;
    double _sdkInitTime;
    NSObject<OS_dispatch_queue> *_queue;
    struct TraceMetaDataBase { struct DataBase *x0; } *_db;
    NSNumber *_watchDogMark;
    NSString *_workingDir;
    NSString *_osVersion;
    NSString *_deviceModel;
    NSString *_bundleId;
    NSDictionary *_config;
    NSDictionary *_dumpSampling;
    NSMutableSet *_tracers;
    NSMutableArray *_methodPairList;
}

+ (void)_aweLazyRegisterLoad;

- (void)recordStart;
- (void)startProfiler;
- (void)sendingData:(id)a0 index:(long long)a1;
- (void)appActive:(id)a0;
- (void)appWillEnterFg:(id)a0;
- (void)appDidEnterBg:(id)a0;
- (long long)nextRecordNumber;
- (BOOL)checkForUpload;
- (void)checkWatchDog;
- (BOOL)initTable;
- (void)stopWithId:(long long)a0;
- (void)dumpCallstackTable;
- (void)dumpImageInfo;
- (void)dumpThreadInfo;
- (void)recordDumpWithTag:(const char *)a0 Info:(const char *)a1;
- (void)_stopAndUpload:(BOOL)a0;
- (void)recordStop;
- (void)_dumpWithTag:(const char *)a0 Info:(const char *)a1 BeginTime:(long long)a2 EndTime:(long long)a3 Tid:(unsigned int)a4 Upload:(BOOL)a5;
- (void)_uploadWithPath:(id)a0;
- (void)setupTracers:(id)a0;
- (void)setupAutoStartup:(id)a0;
- (void)markBegin:(id)a0 withTid:(unsigned int)a1 Timestamp:(long long)a2;
- (void)markEnd:(id)a0 withBegin:(id)a1 tid:(unsigned int)a2 Timestamp:(long long)a3;
- (void)uploadWifiConnected:(BOOL)a0;
- (void)clearProfileTable;
- (void)stopAndUpload:(BOOL)a0;
- (void)stopWithCallback:(id /* block */)a0;
- (void)stopProfiler;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (id)url;
- (void)metrics;
- (void)dealloc;
- (id)metricsUrl;
- (id)gzipData:(id)a0;
- (void)upload;

@end
