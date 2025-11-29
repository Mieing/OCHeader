@class NSString, NSDictionary;

@interface AWEPaySKMCreateOrderRequestModel : CJPayBaseResponse

@property (copy, nonatomic) NSString *memo;
@property (retain, nonatomic) NSDictionary *amount;
@property (copy, nonatomic) NSString *code_token;
@property (nonatomic) long long display_time;
@property (copy, nonatomic) NSString *scan_channel;
@property (copy, nonatomic) NSString *verify_id;

- (void).cxx_destruct;

@end
