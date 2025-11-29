@class NSString;

@interface MMFinderLiveTableStyleCommentPubbleAnchorNoticeCell : MMFinderLiveTableStyleCommentPubbleSignTextCell <ILinkEventExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBackGroundColor;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)LiveAnchorTopicLayoutCommentLabel;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)expandIntroductionTextView;
- (void)shrinkIntroductionTextView;
- (id)generateDisplayedContentForCommentItem:(id)a0 isExpanded:(BOOL)a1;
- (id)signText;
- (BOOL)isUITypeValid;
- (void)beginTopInCommentTable;
- (void)reportForIntroductionTextExpandClick;
- (void)reportForExposeInCommentTableTopState;
- (void)reportAnchorNoticeWithType:(long long)a0;

@end
