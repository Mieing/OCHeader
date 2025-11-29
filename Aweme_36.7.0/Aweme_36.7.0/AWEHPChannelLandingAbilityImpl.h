@class NSString;
@protocol AWEHPLandingRollBackAbility;

@interface AWEHPChannelLandingAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelLandingAbility>

@property (weak, nonatomic) id<AWEHPLandingRollBackAbility> rollBackAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeRollBackComponentWithType:(long long)a0;
- (void)foldRollBackComponent;
- (void).cxx_destruct;

@end
