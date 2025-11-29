@class NSString;

@interface AWEIMWidgetInfoStreakPetElfInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *staticURI;
@property (copy, nonatomic) NSString *staticSkey;
@property (copy, nonatomic) NSString *statusDesc;
@property (nonatomic) long long beginTime;
@property (nonatomic) long long endTime;
@property (nonatomic) unsigned long long streakState;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
