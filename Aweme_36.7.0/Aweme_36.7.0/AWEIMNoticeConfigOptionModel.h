@class NSString;

@interface AWEIMNoticeConfigOptionModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long value;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
