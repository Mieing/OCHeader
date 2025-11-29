@class NSString;

@interface CSJRewardedRetainAlertConfig : NSObject

@property (nonatomic) long long alertType;
@property (copy, nonatomic) NSString *template_url;
@property (copy, nonatomic) NSString *template_md5;
@property (nonatomic) long long reduce_time;
@property (nonatomic) long long reduce_duration;
@property (nonatomic) BOOL didReduceTime;
@property (copy, nonatomic) NSString *red_pack_amount;
@property (nonatomic) long long amount;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *start_time;
@property (copy, nonatomic) NSString *expire_time;

- (void)setupDataWithDictionary:(id)a0;
- (void)prefetchDSLWithSlotId:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
