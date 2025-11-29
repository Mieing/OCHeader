@class NSString, NSMutableArray;

@interface HTSLiveInteractActingThemeRole : IESLivePBBaseMessage

@property (nonatomic) long long themeId;
@property (copy, nonatomic) NSString *themeName;
@property (retain, nonatomic) NSMutableArray *roleListArray;
@property (readonly, nonatomic) unsigned long long roleListArray_Count;
@property (copy, nonatomic) NSString *auditReason;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
