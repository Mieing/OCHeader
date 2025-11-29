@class NSString;

@interface GetGiftBattlePermissionResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) int permissionStatus;
@property (copy, nonatomic) NSString *schemaURL;

+ (id)descriptor;

@end
