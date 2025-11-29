@class NSString;

@interface WCPaySendBindCardAwardCgiResponse : NSObject

@property (nonatomic) long long retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) long long result_code;
@property (retain, nonatomic) NSString *result_msg;
@property (retain, nonatomic) NSString *alert_wording;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
