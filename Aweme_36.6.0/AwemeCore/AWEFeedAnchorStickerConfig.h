@class AWEFeedAnchorStickerView, AWEMarkView;

@interface AWEFeedAnchorStickerConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *stickerButton;
@property (retain, nonatomic) AWEFeedAnchorStickerView *stickerView;
@property (copy, nonatomic) id /* block */ twoLineBlock;
@property (nonatomic) double lastPlayTime;
@property (nonatomic) BOOL anchorHasShown;
@property (nonatomic) BOOL hasChangedTwoLine;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (Class)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocolClass;
+ (BOOL)p_hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (BOOL)p_isAnswerToQuestionVideoAndRedPacketWithAweme:(id)a0;
+ (BOOL)isMiscInfoIsGreenScreen:(id)a0;
+ (BOOL)isFullPageFeedSceneAndShouldBan:(id)a0 extraInfo:(id)a1;
+ (Class)aAWEFeedAnchorStickerConfigDOUYINLiteAdapterClass;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (id)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocol;
- (void)updateAnchorWithPlayBackTime:(double)a0;
- (void)updateAnchorFontWithButton:(id)a0 awemeModel:(id)a1;
- (BOOL)enableTwoLineStyle;
- (void)changeTwoLineStyleWithDuration:(double)a0;
- (BOOL)shouldEnableBigfont;
- (void)removeTwoLineAnimationBlockPeriodIfNeed;
- (BOOL)canShowStickerViewWithModel:(id)a0;
- (id)aAWEFeedAnchorStickerConfigDOUYINLiteAdapter;
- (id)subtitle;
- (void).cxx_destruct;
- (void)reset;

@end
