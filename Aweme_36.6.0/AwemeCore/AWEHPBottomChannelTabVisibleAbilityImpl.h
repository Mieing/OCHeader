@class NSString, AWEHPBottomTabVisibleTaskController;

@interface AWEHPBottomChannelTabVisibleAbilityImpl : AWEHPBottomChannelBaseAbilityImpl <AWEHPChannelTabVisibleAbility>

@property (retain, nonatomic) AWEHPBottomTabVisibleTaskController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyTabBarAlphaTaskWithConfig:(id)a0;
- (id)applyTabBarHiddenTaskWithConfig:(id)a0;
- (id)applyTopBarHiddenTaskWithConfig:(id)a0;
- (id)applyTopBarAlphaTaskWithConfig:(id)a0;
- (void)channelDidSelected;
- (void).cxx_destruct;
- (void)setChannel:(id)a0;

@end
