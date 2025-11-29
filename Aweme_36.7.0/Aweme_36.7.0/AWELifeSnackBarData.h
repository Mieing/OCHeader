@class NSString;

@interface AWELifeSnackBarData : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *grouponText;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long lifePageType;
@property (nonatomic) BOOL needNearbyDefault;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
