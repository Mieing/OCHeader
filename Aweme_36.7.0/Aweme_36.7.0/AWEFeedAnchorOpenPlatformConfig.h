@class AWEMarkView;

@interface AWEFeedAnchorOpenPlatformConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *openPlatformButton;
@property (nonatomic) BOOL twoLineHasAnimated;
@property (copy, nonatomic) id /* block */ twoLineHandler;
@property (nonatomic) BOOL didUpdateForLargeFontAdapt;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)updateAnchorForLargeFontAdaptIfNeeded;
- (void)updateTwoLineUIForLargeFontAdaptIfNeededWithDuration:(double)a0 subTitle:(id)a1;
- (BOOL)enableTwoLineStyle;
- (void)resetTwoLineStyle;
- (void)addTwoLineStyleIfNeeded;
- (BOOL)isJianYingAnchor;
- (void).cxx_destruct;
- (void)reset;

@end
