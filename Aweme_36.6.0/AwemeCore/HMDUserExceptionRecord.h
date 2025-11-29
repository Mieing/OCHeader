@class NSString, NSDictionary, NSArray;

@interface HMDUserExceptionRecord : HMDTrackerRecord

@property (retain, nonatomic) NSString *log;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL needSymbolicate;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) long long freeDiskBlockSize;
@property (retain, nonatomic) NSString *access;
@property (retain, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (retain, nonatomic) NSArray *addressList;
@property (retain, nonatomic) NSDictionary *viewHierarchy;
@property (retain, nonatomic) NSString *aggregationKey;

+ (id)tableName;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
