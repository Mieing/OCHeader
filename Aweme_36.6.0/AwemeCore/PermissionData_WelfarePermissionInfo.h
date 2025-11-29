@class NSString;

@interface PermissionData_WelfarePermissionInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL available;
@property (copy, nonatomic) NSString *settingPageURL;

+ (id)descriptor;

@end
