@class NSString;

@interface HTSLiveSuitButtonInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isLocked;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
