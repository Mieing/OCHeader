@class NSString, FinderGetRelatedListResp, MegaVideoFeed;

@interface MegaVideoPreFetchContinuePlayResult : WXPBGeneratedMessage

@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;
@property (retain, nonatomic) FinderGetRelatedListResp *resp;
@property (retain, nonatomic) MegaVideoFeed *feed;

+ (void)initialize;

@end
