@class MMGroupLiveCommentPubbleView, MMGroupLiveCommentTableViewCellFrame;

@interface MMGroupLiveCommentTableViewCell : MMLiveCommentTableViewCell

@property (retain, nonatomic) MMGroupLiveCommentPubbleView *pubbleView;
@property (readonly, nonatomic) MMGroupLiveCommentTableViewCellFrame *groupLiveCellFrame;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)layoutPubbleView;
- (void)setCommentItem:(id)a0;
- (void)setCellFrame:(id)a0;
- (void).cxx_destruct;

@end
