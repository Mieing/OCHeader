@class NSString;

@interface IESIMColorRingService : HTSService <IESIMColorRingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isStory25Enabled;
- (BOOL)momentUserSettingDisabled;
- (BOOL)isStory25ColorRingAvailableForChatList;
- (BOOL)isStory25ColorRingAvailableForChat;
- (id)afdBrandedString;
- (id)createColorRingManager;
- (id)createStory25FacadeWithPeerUid:(id)a0 imScene:(long long)a1;

@end
