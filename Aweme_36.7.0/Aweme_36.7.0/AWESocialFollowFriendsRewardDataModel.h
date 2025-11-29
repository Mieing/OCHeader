@class NSNumber, NSString;

@interface AWESocialFollowFriendsRewardDataModel : AWELiteBaseApiModel

@property (retain, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSString *toastInfo;
@property (nonatomic) long long followNum;
@property (nonatomic) long long gainedAmount;
@property (nonatomic) BOOL taskComplete;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
