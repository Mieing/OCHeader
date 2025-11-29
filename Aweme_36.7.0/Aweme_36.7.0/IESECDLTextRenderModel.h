@class NSString;

@interface IESECDLTextRenderModel : IESECDLBaseRenderModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) double fontWeight;
@property (nonatomic) long long maxLines;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
