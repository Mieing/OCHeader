@class NSString;

@interface AWENearbyAttributedLabelTextModel : AWENearbyAttributedLabelBaseModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *font;
@property (nonatomic) double fontSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
