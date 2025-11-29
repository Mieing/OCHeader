@class AWEMarkView;

@interface AWEFeedAnchorSoloKTVConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *soloKTVButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (BOOL)shouldEnableBigfont;
- (void)updateAnchorFontWithButton:(id)a0;
- (void).cxx_destruct;

@end
