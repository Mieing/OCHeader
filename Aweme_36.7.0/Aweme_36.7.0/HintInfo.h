@class NSString;

@interface HintInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) int style;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) int bizType;

+ (id)descriptor;

@end
