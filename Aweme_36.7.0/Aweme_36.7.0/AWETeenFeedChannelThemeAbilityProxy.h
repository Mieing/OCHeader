@class NSString;

@interface AWETeenFeedChannelThemeAbilityProxy : NSObject <AWETeenFeedChannelThemeAbility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bottomTabIsLightThemeWithChannel:(id)a0;
- (void)updateBottomTabThemeWithChannel:(id)a0 progress:(double)a1;
- (void)updateBottomTabFillBackgroundWithChannel:(id)a0;

@end
