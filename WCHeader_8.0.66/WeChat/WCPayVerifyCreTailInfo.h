@class NSString;

@interface WCPayVerifyCreTailInfo : NSObject

@property (nonatomic) long long is_can_verify_tail;
@property (copy, nonatomic) NSString *verify_tail_wording;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
