@interface MMFinderLiveTableStyleCommentPubbleSimpleCell : MMFinderLiveTableStyleCommentPubbleCell

- (id)initWithCellFrame:(id)a0;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (BOOL)isTapActionAtPointHandleForProductQuesNotifyClicked:(id)a0;
- (id)getQuestionProductNotifyLinkRectList;

@end
