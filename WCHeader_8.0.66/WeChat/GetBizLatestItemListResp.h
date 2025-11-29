@class NSMutableArray, BaseResponse;

@interface GetBizLatestItemListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

- (void)setList:(id)a0;
- (id)list;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
