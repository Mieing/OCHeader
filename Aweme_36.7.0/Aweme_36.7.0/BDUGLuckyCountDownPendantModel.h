@class NSString, BDUGLuckyCountDownPendantInfoModel;

@interface BDUGLuckyCountDownPendantModel : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) BDUGLuckyCountDownPendantInfoModel *timerComponent;
@property (nonatomic) long long totalTime;
@property (nonatomic) long long rewardAmount;

- (void).cxx_destruct;

@end
