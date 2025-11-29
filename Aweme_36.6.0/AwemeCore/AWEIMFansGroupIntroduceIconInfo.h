@class NSString;

@interface AWEIMFansGroupIntroduceIconInfo : IESIMBaseApiModel

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrlDark;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
