@class NSString;

@interface AWEIMEmoticonDefaultLandingComponent : AWEIMComponentBase <AWEIMEmoticonDefaultLandingComponent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)defaultSelectionUniqueIDWithPageArray:(id)a0;
- (id)eventThemeInfoUniqueIDWithWithPageArray:(id)a0;
- (id)lastUsedThemeInfoUniqueId;
- (id)eventLandingKey;

@end
