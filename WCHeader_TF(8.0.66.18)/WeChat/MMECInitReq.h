@class BaseRequest, NSMutableArray;

@interface MMECInitReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reqTypeList;

+ (void)initialize;

- (void)setReqTypeList:(id)a0;
- (id)reqTypeList;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
