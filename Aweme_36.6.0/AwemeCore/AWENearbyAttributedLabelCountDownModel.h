@class NSString;

@interface AWENearbyAttributedLabelCountDownModel : AWENearbyAttributedLabelBaseModel

@property (nonatomic) int timestamp;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *font;
@property (nonatomic) double fontSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
