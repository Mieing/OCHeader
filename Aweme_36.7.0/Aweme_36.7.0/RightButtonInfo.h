@class NSString;

@interface RightButtonInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
