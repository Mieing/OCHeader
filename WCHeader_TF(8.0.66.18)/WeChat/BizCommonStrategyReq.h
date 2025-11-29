@class BaseRequest, NSMutableArray;

@interface BizCommonStrategyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

- (void)setItems:(id)a0;
- (id)items;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
