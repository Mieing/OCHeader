@class NSString;

@interface AWELiteShareFeedFissionInviteDoneResponseModel : AWELiteBaseApiModel

@property (nonatomic) long long rewardAmount;
@property (copy, nonatomic) NSString *rewardType;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *diversion;
@property (copy, nonatomic) NSString *imgDiversion;
@property (nonatomic) long long status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
