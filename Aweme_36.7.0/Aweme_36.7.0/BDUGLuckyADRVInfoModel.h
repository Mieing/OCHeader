@class NSString;

@interface BDUGLuckyADRVInfoModel : BDUGLuckyJSONModel

@property (nonatomic) long long rewardAmount;
@property (copy, nonatomic) NSString *rewardType;
@property (copy, nonatomic) NSString *rewardName;
@property (copy, nonatomic) NSString *rewardPopupIcon;

- (void).cxx_destruct;

@end
