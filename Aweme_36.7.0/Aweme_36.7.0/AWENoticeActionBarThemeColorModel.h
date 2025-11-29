@class NSString;

@interface AWENoticeActionBarThemeColorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *darkColor;
@property (copy, nonatomic) NSString *lightColor;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lightThemeColor;
- (id)darkThemeColor;
- (void).cxx_destruct;

@end
