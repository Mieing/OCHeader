@class NSString, BaseResponse;

@interface PublishUGCToGameCenterResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *jsonData;
@property (nonatomic) unsigned int topicId;
@property (nonatomic) unsigned long long videoId;

+ (void)initialize;

@end
