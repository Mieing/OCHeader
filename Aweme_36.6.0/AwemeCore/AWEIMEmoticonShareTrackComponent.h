@interface AWEIMEmoticonShareTrackComponent : AWEIMEmoticonIMTrackComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)trackDidSelectEmoticonModel:(id)a0 themeModel:(id)a1 indexPath:(id)a2;
- (id)enterFromTrackValue;
- (id)showEmojiTabScene;
- (id)trackParamsWithEmoticonModel:(id)a0 themeModel:(id)a1 trackedEmoticonShowedIDs:(id)a2 indexPath:(id)a3;

@end
