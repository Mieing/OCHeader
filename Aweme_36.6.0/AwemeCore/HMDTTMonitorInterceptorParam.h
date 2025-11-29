@class NSString, NSDictionary;

@interface HMDTTMonitorInterceptorParam : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *logType;
@property (nonatomic) unsigned long long storeType;
@property (retain, nonatomic) NSDictionary *wrapData;
@property (nonatomic) long long accumulateCount;
@property (nonatomic) BOOL isNewInterface;
@property (nonatomic) BOOL needUpload;
@property (copy, nonatomic) NSString *traceParent;
@property (nonatomic) long long singlePointOnly;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) double timestamp;

- (id)doctorParams;
- (void).cxx_destruct;
- (id)init;

@end
