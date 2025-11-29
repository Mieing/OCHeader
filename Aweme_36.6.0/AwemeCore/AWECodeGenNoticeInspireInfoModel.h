@class AWECodeGenNoticeInspireFollowCollectInfoModel, NSString, AWECodeGenNoticeInspireFollowImmediatelyInfoModel, AWECodeGenUrlModel;

@interface AWECodeGenNoticeInspireInfoModel : AWEBaseDataModel

@property (nonatomic) long long scene;
@property (retain, nonatomic) AWECodeGenUrlModel *iconUrlModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWECodeGenNoticeInspireFollowImmediatelyInfoModel *immediatelyRewardInfoModel;
@property (retain, nonatomic) AWECodeGenNoticeInspireFollowCollectInfoModel *collectToTargetInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
