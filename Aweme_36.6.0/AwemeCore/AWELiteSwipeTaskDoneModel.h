@class NSString, AWELiteSwipeTaskModel, AWELiteSwipeRewardToastModel;

@interface AWELiteSwipeTaskDoneModel : AWELiteBaseApiModel

@property (retain, nonatomic) AWELiteSwipeTaskModel *swipeTask;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) AWELiteSwipeRewardToastModel *rewardToast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
