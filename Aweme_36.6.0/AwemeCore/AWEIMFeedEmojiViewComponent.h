@class NSString;

@interface AWEIMFeedEmojiViewComponent : AWEIMFlexComponent <AWEIMFansGroupFeedEmojisViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_createPresenter;
- (void)didSelectedFansGroupFeedEmojiWithCell:(id)a0 emoticonModel:(id)a1;
- (void)didSelectedFansGroupFeedEmojiWithModel:(id)a0;
- (void)p_updateFansGroupFeedEmojisUI;

@end
