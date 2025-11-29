@class AWEIMAudioEmojiPlayer, NSString;
@protocol IESIMMessageListUITaskService;

@interface AWEIMAudioEmojiPlayerComponent : AWEIMFlexComponent <AWEIMAudioEmojiPlayerDelegate, AWEIMMultiSelectedAction, AWEIMAudioEmojiPlayerComponentInterface>

@property (retain, nonatomic) AWEIMAudioEmojiPlayer *audioEmojiPlayer;
@property (nonatomic) BOOL didAutoPlay;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)multiSelectedStateDidChanged:(BOOL)a0;
- (void)audioEmojiPlayer:(id)a0 statusDidChangeFrom:(unsigned long long)a1 toStaus:(unsigned long long)a2;
- (void)stopPlayerIfRecalledMessageIsPlaying:(id)a0;
- (void)p_setupPlayer:(id)a0;
- (void)didClickAudioEmojiWithEnterMethod:(id)a0;
- (void)stopPlayAudioEmoji;
- (void)p_autoPlayAudioIfNeeded;
- (void).cxx_destruct;

@end
