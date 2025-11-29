@class NSString;

@interface NewLifePermissionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *permission;
@property (nonatomic) BOOL forceRequest;

+ (void)initialize;

@end
