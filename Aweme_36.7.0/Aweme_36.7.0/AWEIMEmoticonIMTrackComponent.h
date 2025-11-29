@class NSString;

@interface AWEIMEmoticonIMTrackComponent : AWEIMEmoticonTrackComponent <AWEIMEmoticonTrackComponent>

@property (nonatomic) long long reportTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (id)p_chatType;
- (void)trackThemeInfoSelectionChanged:(id)a0 enterMethod:(id)a1;
- (void)trackDidSelectEmoticonModel:(id)a0 themeModel:(id)a1 indexPath:(id)a2;
- (void)trackFavoriteRecommendEmojiAction:(id)a0;
- (void)trackFavoriteRecommendEmojiShow;
- (id)enterFromTrackValue;
- (void)trackDanmakuEntryShowIfNeededTrackedEmoticonShowedIDs:(id)a0;
- (id)showEmojiTabScene;
- (id)p_favoriteRecommendEmojiTrackCommonParams;

@end
