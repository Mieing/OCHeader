@class NSString, Material, BaseResponse;

@interface GetInteractionMaterialResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) Material *material;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

@end
