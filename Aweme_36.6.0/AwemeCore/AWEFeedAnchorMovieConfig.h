@class AWEMarkView;

@interface AWEFeedAnchorMovieConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *mvButton;
@property (copy, nonatomic) id /* block */ twoLineBlock;
@property (nonatomic) double lastPlayTime;
@property (nonatomic) BOOL anchorHasShown;
@property (nonatomic) BOOL hasChangedTwoLine;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (BOOL)p_hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)p_hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)updateAnchorFontWithButton:(id)a0 awemeModel:(id)a1;
- (BOOL)enableTwoLineStyle;
- (void)changeTwoLineStyleWithDuration:(double)a0;
- (BOOL)shouldEnableBigfont;
- (void)removeTwoLineAnimationBlockPeriodIfNeed;
- (BOOL)isOneKeyMovie:(id)a0;
- (id)subtitle;
- (void).cxx_destruct;
- (void)reset;

@end
