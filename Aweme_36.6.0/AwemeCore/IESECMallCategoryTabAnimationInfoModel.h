@class NSString;

@interface IESECMallCategoryTabAnimationInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long animationType;
@property (nonatomic) long long carouselTimes;
@property (copy, nonatomic) NSString *lightLottie;
@property (copy, nonatomic) NSString *darkLottie;
@property (nonatomic) long long rateSeconds;
@property (nonatomic) long long rateTimes;
@property (nonatomic) long long priority;
@property (nonatomic) long long playedTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
