@class NSMutableArray, BaseResponse;

@interface EcsInitResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *ecInitRespList;

+ (void)initialize;

- (void)setEcInitRespList:(id)a0;
- (id)ecInitRespList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
