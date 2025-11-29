@class NSString;

@interface HTSLiveAdminDescInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) int type;

+ (id)descriptor;

@end
