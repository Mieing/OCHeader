@class NSString;

@interface AWEIMMessageAvatarComponent : AWEIMFlexComponent <AWEIMMessageAvatarInterface>

@property (nonatomic) BOOL isCustomPetElfAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (id)currentAvatarView;
- (void)p_createPresenterIfNeeded;
- (void)p_updatePresenter:(id)a0;
- (void)p_avatarTapped;
- (void)p_addKVO:(id)a0;
- (void)p_fetchUserIfNeedWith:(id)a0;
- (void)p_setupAccessibilityLabel:(id)a0;
- (id)p_findPlaceholderImage;
- (id)p_trackerConfig:(id)a0;
- (void)p_avatarLongPress;
- (void)p_doubleTappedWithAvatarView:(id)a0;
- (BOOL)p_disableBlurAvatar:(id)a0;
- (id)p_avatarURL:(id)a0;
- (id)p_avatarTagURL:(id)a0;
- (id)p_avatarTagPlaceholderImageName:(id)a0;
- (BOOL)p_isBot:(id)a0;

@end
