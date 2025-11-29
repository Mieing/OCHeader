@class NSMutableArray, MMFinderLiveLikeNotifyDataItem;

@interface MMFinderLiveNotifyStyleLikeNotifyCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell

@property (retain, nonatomic) NSMutableArray *headImageViewList;
@property (readonly, nonatomic) MMFinderLiveLikeNotifyDataItem *likeNotifyDataItem;

- (id)initWithCellFrame:(id)a0;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (void)updateCommentLabelOrigin;
- (void)layoutHeadImageViews;
- (void)updateHeadImageViewsOrigin;
- (void).cxx_destruct;

@end
