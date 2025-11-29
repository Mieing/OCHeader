@class AWELuckyCatExperienceTaskInfo, NSString, NSDictionary, AWERedPackToastDataModel, AWEWeekendRewardMessageModel;

@interface AWERedPacketVideoPublishDataModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *rewardDesc;
@property (copy, nonatomic) NSString *awardType;
@property (copy, nonatomic) NSString *buttonDesc;
@property (nonatomic) long long awardNum;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *subButtonDesc;
@property (copy, nonatomic) NSString *venueSchema;
@property (copy, nonatomic) AWEWeekendRewardMessageModel *goldReward;
@property (copy, nonatomic) AWEWeekendRewardMessageModel *energyReward;
@property (nonatomic) long long redPackNum;
@property (copy, nonatomic) NSString *descText;
@property (nonatomic) unsigned long long userStatus;
@property (copy, nonatomic) NSDictionary *popupData;
@property (nonatomic) unsigned long long modelType;
@property (copy, nonatomic) NSString *awardTag;
@property (nonatomic) unsigned long long experience;
@property (retain, nonatomic) AWELuckyCatExperienceTaskInfo *experienceInfo;
@property (nonatomic) unsigned long long noticeType;
@property (retain, nonatomic) AWERedPackToastDataModel *redPackToastInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
