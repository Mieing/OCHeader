@class NSString;

@interface ConfigItemPre_Bubble : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) int count;

+ (id)descriptor;

@end
