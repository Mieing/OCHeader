@class BaseRequest, NSMutableArray;

@interface SnsCommentDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int contentReqsCount;
@property (retain, nonatomic) NSMutableArray *contentReqs;

+ (void)initialize;

@end
