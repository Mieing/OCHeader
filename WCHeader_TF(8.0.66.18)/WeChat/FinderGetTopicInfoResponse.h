@class FinderTopicInfo, FinderGetTopicInfoResponse_RedirectTopicInfo, BaseResponse;

@interface FinderGetTopicInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderTopicInfo *topic;
@property (retain, nonatomic) FinderGetTopicInfoResponse_RedirectTopicInfo *redirectInfo;

+ (void)initialize;

@end
