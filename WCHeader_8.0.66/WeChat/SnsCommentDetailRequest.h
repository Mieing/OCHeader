@class BaseRequest, NSMutableArray;

@interface SnsCommentDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int contentReqsCount;
@property (retain, nonatomic) NSMutableArray *contentReqs;

+ (void)initialize;

- (void)setContentReqs:(id)a0;
- (id)contentReqs;
- (void)setContentReqsCount:(unsigned int)a0;
- (unsigned int)contentReqsCount;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
