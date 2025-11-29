@class NSString;

@interface AWELongPressPanelService : HTSService <AWELongPressPanelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweShareTextInputViewManager;
- (id)longPressPanelManager;
- (Class)longPressPanelABSettings;
- (Class)longPressPanelSpeedOptimizeUtil;
- (id)createLongPressPanelBaseViewModel;

@end
