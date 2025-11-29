@class NSMutableArray, BaseResponse;

@interface BatchGetDownloadUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *respList;

+ (void)initialize;

- (void)setRespList:(id)a0;
- (id)respList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
