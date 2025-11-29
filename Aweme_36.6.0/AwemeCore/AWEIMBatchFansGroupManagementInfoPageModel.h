@class AWEIMCreateFansGroupModel, NSArray, NSString, AWEIMFansGroupIntroduceModel, AWEIMFansGroupContributionInfoModel;

@interface AWEIMBatchFansGroupManagementInfoPageModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *fansGroupInfoList;
@property (nonatomic) long long groupTotalCount;
@property (nonatomic) long long groupMemberTotalCount;
@property (nonatomic) long long shownGroupTotalCount;
@property (nonatomic) long long shownGroupMemberTotalCount;
@property (retain, nonatomic) AWEIMFansGroupContributionInfoModel *groupContribution;
@property (retain, nonatomic) AWEIMCreateFansGroupModel *createInfo;
@property (retain, nonatomic) AWEIMFansGroupIntroduceModel *introduceInfo;
@property (nonatomic) BOOL commercePermission;
@property (nonatomic) long long visitMemberTotalCount;
@property (copy, nonatomic) NSString *visitRate;

+ (id)fansGroupInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
