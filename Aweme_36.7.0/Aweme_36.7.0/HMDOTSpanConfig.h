@class HMDOTTrace, NSString, NSArray, NSDictionary, NSDate, NSError;
@protocol HMDOTSpanMovinglineDataProtocol;

@interface HMDOTSpanConfig : NSObject

@property (copy, nonatomic) NSString *operationName;
@property (copy) NSArray *logs;
@property (weak, nonatomic) HMDOTTrace *trace;
@property (retain, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDictionary *tags;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<HMDOTSpanMovinglineDataProtocol> data;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isInstant;
@property (nonatomic) BOOL needReferenceOtherLog;

- (id)initWithOperationName:(id)a0;
- (void)logMessage:(id)a0 fields:(id)a1;
- (void).cxx_destruct;

@end
