@class BaseRequest, NSString;

@interface GetSnsAdMetricReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionString;
@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *snsAdId;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned int likeCommentCnt;
@property (nonatomic) unsigned int likeCnt;
@property (nonatomic) unsigned int commentCnt;

+ (void)initialize;

@end
