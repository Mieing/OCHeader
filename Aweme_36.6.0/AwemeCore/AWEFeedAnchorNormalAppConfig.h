@class AWEMarkView;

@interface AWEFeedAnchorNormalAppConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *appAnchorButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)updateAnchorIconImage:(id)a0;
- (void).cxx_destruct;

@end
