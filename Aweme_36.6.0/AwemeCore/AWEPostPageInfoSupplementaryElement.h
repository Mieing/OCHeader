@interface AWEPostPageInfoSupplementaryElement : AWEPostPageCellElement

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)elementAppear;
- (BOOL)forceReceiveEvents;
- (BOOL)imageAlbumShortenCreationEnableChallenge;
- (void)addChallengeStickerIfNeed;
- (BOOL)isVisible;
- (id)cell;

@end
