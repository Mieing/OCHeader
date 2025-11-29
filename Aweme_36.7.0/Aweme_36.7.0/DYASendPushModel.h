@class NSString;

@interface DYASendPushModel : DYAPassportResponseModel

@property (copy, nonatomic) NSString *expireTime;
@property (nonatomic) BOOL isFrontier;
@property (copy, nonatomic) NSString *token;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
