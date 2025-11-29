@class GetGiftBattlePermissionResponse_ResponseData;

@interface GetGiftBattlePermissionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetGiftBattlePermissionResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
