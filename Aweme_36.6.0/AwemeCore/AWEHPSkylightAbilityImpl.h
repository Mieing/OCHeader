@class AWEHPSkylightContainer, NSString;
@protocol AWEHPSkylightAccessApproachProtocol;

@interface AWEHPSkylightAbilityImpl : NSObject <AWEHomepageSkylightAbility>

@property (weak, nonatomic) AWEHPSkylightContainer *skylightContainer;
@property (weak, nonatomic) id<AWEHPSkylightAccessApproachProtocol> accessApproach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackSkylightChangeState:(BOOL)a0 withErrorMessage:(id)a1 withFromStatus:(long long)a2 withToStatus:(long long)a3;
- (void)p_updateHomepageSkylightFromState:(long long)a0 toState:(long long)a1 withProgressState:(long long)a2 withAnimate:(BOOL)a3 completion:(id /* block */)a4;
- (void)p_updateHomepageSkylightExpandedUIConfigIfNeed;
- (void)updateHomepageSkylightExpandedUIConfig:(id)a0 withAnimate:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateHomepageSkylightState:(long long)a0 withAnimate:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateHomepageSkylightExpandedHeight:(double)a0 withAnimate:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithSkylightContainer:(id)a0 withAccessApproach:(id)a1;
- (void).cxx_destruct;

@end
