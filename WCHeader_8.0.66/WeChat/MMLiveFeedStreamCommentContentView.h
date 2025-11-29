@interface MMLiveFeedStreamCommentContentView : MMFinderLiveCommentBaseContentView

+ (double)commentTableWidth:(id)a0;
+ (double)commentTableWidthPortrait:(id)a0;
+ (double)commentTableWidthLandScape:(id)a0;
+ (double)currentCommentTableWidth:(id)a0;

- (id)commentDataMgr;
- (void)handleUnReadCountLabelTap:(id)a0;
- (void)layoutUI;
- (void)layoutCommentTableBackView;
- (void)layoutCommentTableView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCommentTableViewFrame;
- (void)updateUnReadCountLabel:(unsigned long long)a0;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(BOOL)a0;
- (id)createUnReadCountLabel;

@end
