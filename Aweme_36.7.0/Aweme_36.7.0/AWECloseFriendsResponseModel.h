@class NSArray;

@interface AWECloseFriendsResponseModel : AWEBaseApiModel

@property (nonatomic) long long closeFriendsStatus;
@property (nonatomic) long long newCloseFriendsStatus;
@property (nonatomic) long long followRequestType;
@property (retain, nonatomic) NSArray *commitStatusList;
@property (nonatomic) long long onBoardingTime;

+ (id)closeFriendsStatusJSONTransformer;
+ (id)commitStatusListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
