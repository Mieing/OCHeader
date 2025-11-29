@class NSString;

@interface AWEIMUserByteSyncModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) long long serverTimestamp;
@property (copy, nonatomic) NSString *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
