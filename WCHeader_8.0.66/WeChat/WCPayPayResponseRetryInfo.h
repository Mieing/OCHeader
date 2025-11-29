@class NSString;

@interface WCPayPayResponseRetryInfo : NSObject

@property (nonatomic) long long retry_interval;
@property (nonatomic) long long max_retry_count;
@property (retain, nonatomic) NSString *retry_fail_wording;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
