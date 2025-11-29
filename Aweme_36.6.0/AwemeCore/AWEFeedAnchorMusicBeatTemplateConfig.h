@class AWEMarkView;

@interface AWEFeedAnchorMusicBeatTemplateConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *musicBeatTemplateButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (id)p_extractNLESummaryFromExtra:(id)a0;
+ (BOOL)p_featureBitsCheckWithExtra:(id)a0;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void).cxx_destruct;

@end
