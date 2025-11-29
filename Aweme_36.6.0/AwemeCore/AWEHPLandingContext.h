@class NSString, AWEHPLandingStrategyModel, AWEHPLandingStrategyAbilityImpl, NSNumber;
@protocol AWEHPLandingStrategyModelProtocol, AWEHPLandingStrategyAbility, AWEHPLandingScheduledModelProtocol;

@interface AWEHPLandingContext : NSObject <NSCopying, AWEHPLandingContextProtocol>

@property (retain, nonatomic) NSString *landingScene;
@property (retain, nonatomic) AWEHPLandingStrategyModel<AWEHPLandingStrategyModelProtocol> *strategyModel;
@property (retain, nonatomic) AWEHPLandingStrategyAbilityImpl<AWEHPLandingStrategyAbility> *strategyAbility;
@property (retain, nonatomic) id<AWEHPLandingScheduledModelProtocol> scheduledModel;
@property (retain, nonatomic) NSNumber *landingSuccess;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
