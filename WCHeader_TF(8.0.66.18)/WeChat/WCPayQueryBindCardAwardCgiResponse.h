@class NSString, WCPayBindCardActivityChangeInfo;

@interface WCPayQueryBindCardAwardCgiResponse : NSObject

@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) long long retcode;
@property (retain, nonatomic) WCPayBindCardActivityChangeInfo *activity_change_info;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
