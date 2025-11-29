@class NSString;

@interface HighLightDesc : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *highlightText;
@property (copy, nonatomic) NSString *highlightColor;

+ (id)descriptor;

@end
