@class NSMutableArray, BaseResponse;

@interface BatchWxaAttrSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *respInfoList;

+ (void)initialize;

- (void)setRespInfoList:(id)a0;
- (id)respInfoList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
