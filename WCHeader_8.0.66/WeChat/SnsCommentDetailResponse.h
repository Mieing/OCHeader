@class NSMutableArray, BaseResponse;

@interface SnsCommentDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int contentResultsCount;
@property (retain, nonatomic) NSMutableArray *contentResults;

+ (void)initialize;

- (void)setContentResults:(id)a0;
- (id)contentResults;
- (void)setContentResultsCount:(unsigned int)a0;
- (unsigned int)contentResultsCount;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
