@class BaseRequest, NSMutableArray;

@interface EcsInitReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *ecInitReqList;

+ (void)initialize;

- (void)setEcInitReqList:(id)a0;
- (id)ecInitReqList;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
