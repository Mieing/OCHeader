@interface ACCVideoEditTipsViewModel : ACCEditViewModel

@property (nonatomic) BOOL isVCAppeared;
@property (nonatomic) BOOL isNormalVideoCanShowMusicStickerBubble;

- (BOOL)allowShowClipAtShareToStorySceneBubble;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end
