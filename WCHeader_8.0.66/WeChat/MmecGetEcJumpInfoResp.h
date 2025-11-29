@class EcsJumpInfo, BaseResponse;

@interface MmecGetEcJumpInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EcsJumpInfo *ecsJumpInfo;

+ (void)initialize;

@end
