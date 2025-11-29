@class NSString;

@interface AWERecWordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long createTime;
@property (nonatomic) long long type;
@property (nonatomic) long long status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
