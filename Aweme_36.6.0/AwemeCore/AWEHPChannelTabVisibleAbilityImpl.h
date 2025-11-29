@class AWEHPBottomTabVisibleTaskController, NSString, AWEHPTopTabVisibleTaskController;

@interface AWEHPChannelTabVisibleAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelTabVisibleAbility>

@property (retain, nonatomic) AWEHPTopTabVisibleTaskController *topController;
@property (retain, nonatomic) AWEHPBottomTabVisibleTaskController *bottomController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyTabBarAlphaTaskWithConfig:(id)a0;
- (id)applyTabBarHiddenTaskWithConfig:(id)a0;
- (id)applyTopBarHiddenTaskWithConfig:(id)a0;
- (id)applyTopBarAlphaTaskWithConfig:(id)a0;
- (void)didSelectedChannelFromChannel:(id)a0;
- (void).cxx_destruct;
- (void)setChannel:(id)a0;

@end
