@class NSString;

@interface AWETextDecorateViewModel : AWEDecorateViewModel

@property (copy, nonatomic) NSString *content;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *fontColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
