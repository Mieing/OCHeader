@class AWEFeedAnchorGameCPMarkView;

@interface AWEFeedAnchorGameCPConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEFeedAnchorGameCPMarkView *gameCPAnchorView;
@property (copy, nonatomic) id /* block */ blockPeriod;
@property (nonatomic) BOOL hasAnimated;
@property (nonatomic) BOOL hasFullText;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL didCreateContainer;

+ (Class)aAWEPadSplitScreenAdapterClass;
+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)aAWEPadSplitScreenAdapter;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)createContainerIfNeed;
- (void)updateAnchorIconImage:(id)a0;
- (void)destroyContainerIfNeed;
- (void)updateAnchorToAdaptBigFontModeIfNeeded;
- (void)updateTwoLineStyleLayoutIfNeed;
- (void)updateAnchorTitleWithModel:(id)a0;
- (void)addAnimationBlockPeriodIfNeed;
- (BOOL)isDefaultShowTwoLineStyle;
- (void)removeAnimationBlockPeriodIfNeed;
- (void)trackEventWithEventName:(id)a0;
- (void)trackAdEventWithLabelName:(id)a0;
- (void)showTwoLineStyle;
- (id)videoAnchorInterface;
- (id)anchorContext;
- (id)handleAdTagWithAdTagText:(id)a0 markText:(id)a1 categoryTitle:(id)a2;
- (id)adAttributeStringWithText:(id)a0 tailText:(id)a1;
- (void)updateLineHeightIfNeeded;
- (BOOL)isAnimationShowOneLineStyle;
- (BOOL)isAnimationShowTwoLineStyle;
- (id)animationTitle;
- (double)subTitleChangeTime;
- (void)updateTwoLineUIForLargeFontAdaptIfNeededWithDuration:(double)a0 subTitle:(id)a1;
- (id)getCurrentAnchorTitleType;
- (id)getCurrShowingAnchorTitleText;
- (void)trackEventWithEventName:(id)a0 url:(id)a1;
- (void)trackAdEventWithClickTrackList;
- (id)getAnchorMediaTypeStr;
- (void)didClickedAnchor;
- (void).cxx_destruct;
- (id)subTitle;
- (void)reset;
- (void)dealloc;
- (double)animationBeginTime;

@end
