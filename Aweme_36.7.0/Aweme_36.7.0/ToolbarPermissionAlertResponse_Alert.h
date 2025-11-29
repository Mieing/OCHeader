@class NSString;

@interface ToolbarPermissionAlertResponse_Alert : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *scheme;

+ (id)descriptor;

@end
