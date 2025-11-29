@class NSString;

@interface AWENoticeTextStructModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
