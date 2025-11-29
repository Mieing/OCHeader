@interface IESLiveGuestBattleResourceManager : IESLiveMultiBaseResourceManager

- (id)themeConfig;
- (id)winner_victory_anim;
- (void)monitorDressConfigErrorWithStatus:(long long)a0 error:(id)a1;
- (id)resourceURLWithKey:(id)a0 resourceName:(id)a1;
- (id)heartbrokenName;
- (id)background;
- (id)init;

@end
