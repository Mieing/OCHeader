@class NSString, AWEMarkView;

@interface AWEFeedAnchorIronManConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *ironManButton;
@property (copy, nonatomic) id /* block */ blockPeriod;
@property (copy, nonatomic) id /* block */ twoLineBlock;
@property (nonatomic) BOOL hasAnimated;
@property (nonatomic) BOOL hasDynamicIcon;
@property (nonatomic) BOOL twoLineHasAnimated;
@property (nonatomic) double playTime;
@property (copy, nonatomic) id /* block */ ironManTwoLineBlock;
@property (copy, nonatomic) id /* block */ ironManTwoLineAlbumBlock;
@property (nonatomic) BOOL hasIronManTwoLineStyleAnimated;
@property (nonatomic) long long doubleInfoResult;
@property (nonatomic) long long doubleInfoShow;
@property (nonatomic) BOOL anchorHasShown;
@property (copy, nonatomic) NSString *twoLineContent;
@property (nonatomic) double startShowtime;
@property (nonatomic) double doubleLineTime;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)enableIronManAnchorLargeMode;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)addAnimationBlockPeriodIfNeed;
- (void)removeAnimationBlockPeriodIfNeed;
- (id)adAttributeStringWithText:(id)a0 tailText:(id)a1;
- (id)animationTitle;
- (id)fontWithWeight:(long long)a0 size:(double)a1;
- (struct CGSize { double x0; double x1; })sizeWithOriginSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAnchorUIConfigModel:(id)a0;
- (BOOL)shouldShowIronManButton;
- (void)layoutButtonWithNewStyle:(BOOL)a0 withModel:(id)a1;
- (id)anchorConfig;
- (void)addIronManTwoLineStyleBlockPeriodIfNeed:(id)a0;
- (void)trackEventWithEventName:(id)a0 withParams:(id)a1;
- (void)addTwoLineStyleBlockPeriodIfNeed:(id)a0;
- (void)trackAnchorAdEventWithLabel:(id)a0 refer:(id)a1;
- (void)trackAnchorUserEventWithEventName:(id)a0;
- (void)ironManAnchorViewWillShow:(id)a0;
- (void)updateForSpiderDoubleLine:(id)a0;
- (BOOL)canPreloadIronMan:(id *)a0;
- (BOOL)forbidIronManPreloadInLowerDevice;
- (BOOL)enableIronManPreloadWithNunki;
- (void)sendEventTrackingWhenClick:(id)a0;
- (void)removeTwoLineAnimationBlockIfNeed;
- (void)removeIronManTwoLineAnimationBlockIfNeed;
- (void)sendDurationNotEnoughTracker;
- (void)updateAnchorStyle;
- (void)handlePlaybackTimeChanged:(double)a0 duration:(double)a1;
- (void)trackIronManShowDoubleLineStyle;
- (id)getCommonTrackInfoDict;
- (id)anchorTrackParamsWithEventName:(id)a0;
- (void)trackSpiderManClickEvent;
- (void).cxx_destruct;
- (void)reset;
- (int)animationBeginTime;

@end
