@class AWELiteBagGuideRewardModel, NSString, AWELiteBagGuideTimeModel, AWELiteBagGuideResourceModel, AWELiteBagGuideJumpModel, AWELiteBagGuideShowTimeConfigModel;

@interface AWELiteBagGuideModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long style;
@property (retain, nonatomic) AWELiteBagGuideResourceModel *resource;
@property (retain, nonatomic) AWELiteBagGuideRewardModel *reward;
@property (retain, nonatomic) AWELiteBagGuideShowTimeConfigModel *showTimeConfigModel;
@property (retain, nonatomic) AWELiteBagGuideJumpModel *jumpModel;
@property (retain, nonatomic) AWELiteBagGuideTimeModel *bagGuideTimeModel;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long canShowProfitBanner;
@property (nonatomic) long long canPrefetchAdDetail;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
