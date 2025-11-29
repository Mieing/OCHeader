@class NSString, NSNumber;

@interface AWEBarFontModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *fontName;
@property (retain, nonatomic) NSNumber *fontFamily;
@property (retain, nonatomic) NSNumber *fontSize;
@property (nonatomic) unsigned long long bold;
@property (copy, nonatomic) NSString *fontColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
