@class AWELiteUnLoginReadTaskModel, AWELiteEnhancePendant, AWELuckyCatPendant, AWELuckyCatLottieResource;

@interface AWELiteUnLoginTaskResponseModel : AWELiteBaseApiModel

@property (nonatomic) unsigned long long taskDuration;
@property (retain, nonatomic) AWELiteUnLoginReadTaskModel *unLoginReadTaskModel;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (retain, nonatomic) AWELiteEnhancePendant *enhance;
@property (retain, nonatomic) AWELuckyCatLottieResource *coinsFlyInLottieResource;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
