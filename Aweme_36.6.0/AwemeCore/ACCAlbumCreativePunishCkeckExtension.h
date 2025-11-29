@interface ACCAlbumCreativePunishCkeckExtension : ACCAlbumExtension

@property (nonatomic) BOOL hasShowed;

- (void)albumDidShowViewController:(id)a0;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)tryShowCurrentUserPunishPopup;

@end
