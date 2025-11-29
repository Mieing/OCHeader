@class NSString, AWEFollowNoticeImmediatelyRewardInfoModel, AWEFollowCollectToTargetInfoModel, AWEURLModel;

@interface AWENoticeRedPacketInfoModel : AWEBaseApiModel

@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *openURLSchema;
@property (copy, nonatomic) NSString *noticeContent;
@property (copy, nonatomic) NSString *noticeHint;
@property (retain, nonatomic) AWEFollowNoticeImmediatelyRewardInfoModel *followNoticeImmediatelyRewardInfo;
@property (retain, nonatomic) AWEFollowCollectToTargetInfoModel *followNoticeCollectToTargetInfo;

+ (id)iconURLJSONTransformer;
+ (id)followNoticeImmediatelyRewardInfoJSONTransformer;
+ (id)followNoticeCollectToTargetInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
