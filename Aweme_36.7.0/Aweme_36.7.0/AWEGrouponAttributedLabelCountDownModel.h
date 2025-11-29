@class NSString;

@interface AWEGrouponAttributedLabelCountDownModel : AWEGrouponAttributedLabelBaseModel

@property (nonatomic) int timestamp;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *font;
@property (nonatomic) double fontSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
