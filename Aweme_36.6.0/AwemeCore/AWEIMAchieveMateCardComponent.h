@class NSMutableSet;

@interface AWEIMAchieveMateCardComponent : AWEIMFlexComponent

@property (nonatomic) BOOL hasPlayedAnimation;
@property (retain, nonatomic) NSMutableSet *hasTrackShownStickerSet;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_trackStickerViewWithEmoticonModel:(id)a0 event:(id)a1;
- (BOOL)checkAnimationHasPlayed;
- (void)playClashAnimationOnce;
- (void)syncHasPlayed;
- (void).cxx_destruct;
- (id)displayMessage;

@end
