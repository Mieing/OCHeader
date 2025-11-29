@class NSString;

@interface AWESearchResultHybirdPerformanceLogManager : NSObject

@property (nonatomic) BOOL isSuccess;
@property (copy, nonatomic) NSString *errorText;
@property (nonatomic) long long enterPageTime;
@property (nonatomic) long long requestStartTime;
@property (nonatomic) long long requestFinishTime;
@property (nonatomic) long long renderFinishTime;

+ (void)trackLog;
+ (long long)p_getTime;
+ (void)recordRendered;
+ (void)recordRequest;
+ (void)recordResponse;
+ (void)setSuccess:(BOOL)a0 errorText:(id)a1;
+ (void)beginNewLog;
+ (void)recordInit;
+ (void)setType:(unsigned long long)a0;
+ (id)shareInstance;

- (void).cxx_destruct;
- (void)reset;

@end
