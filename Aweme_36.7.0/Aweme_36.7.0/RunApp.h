@class NSString;

@interface RunApp : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) int appType;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
