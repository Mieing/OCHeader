@class AWEMarkView;

@interface AWEFeedAnchorOptimizedMovieTicketConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) AWEMarkView *mediumButton;
@property (nonatomic) BOOL isExpand;
@property (nonatomic) BOOL didUpdateForLargeFontAdapt;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)commonParams;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)updateAnchorForLargeFontAdaptIfNeeded;
- (void)handleAnchorViewTapped;
- (void)trackEventWithEventName:(id)a0;
- (void)trackEventWithEventName:(id)a0 url:(id)a1;
- (void)setAdTagLabelAttributedText:(id)a0 tailText:(id)a1;
- (void)setMarkLabelAttributedText:(id)a0 tailText:(id)a1;
- (id)attributeStringForNewStyleWithText:(id)a0 tailText:(id)a1;
- (id)attributeStringWithText:(id)a0 tailText:(id)a1;
- (void)updateAnchorWithPlayBackTime:(double)a0;
- (void).cxx_destruct;
- (void)reset;

@end
