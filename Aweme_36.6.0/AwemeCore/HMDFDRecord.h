@class NSString, NSDictionary;

@interface HMDFDRecord : HMDTrackerRecord

@property (retain, nonatomic) NSString *log;
@property (nonatomic) int maxFD;
@property (retain, nonatomic) NSDictionary *fds;
@property (retain, nonatomic) NSString *errType;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) long long freeDiskBlockSize;
@property (retain, nonatomic) NSString *access;
@property (retain, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSDictionary *operationTrace;

+ (id)tableName;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
