@class NSString, NSDictionary;

@interface AWENoticeSchemaStructModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSDictionary *uiInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)leftTextColor;
- (id)rightTextColor;
- (id)leftIconUrl;
- (id)uiInfoUnderTheme;
- (id)textColorForKey:(id)a0;
- (void).cxx_destruct;

@end
