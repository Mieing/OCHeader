@class NSString;

@interface HTSLiveInteractActingRole : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long themeId;
@property (copy, nonatomic) NSString *themeName;

+ (id)descriptor;

@end
