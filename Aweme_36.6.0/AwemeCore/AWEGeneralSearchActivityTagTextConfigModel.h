@class NSString;

@interface AWEGeneralSearchActivityTagTextConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double textSize;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textBg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
