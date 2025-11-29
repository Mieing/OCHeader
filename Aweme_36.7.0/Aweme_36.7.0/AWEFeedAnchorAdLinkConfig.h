@class AWEAdLinkSponsorshipView;

@interface AWEFeedAnchorAdLinkConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEAdLinkSponsorshipView *linkAdButton;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (BOOL)isLinkButtonVisible;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;

@end
