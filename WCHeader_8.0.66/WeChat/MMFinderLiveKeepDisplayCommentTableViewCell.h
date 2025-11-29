@class MMLiveCommentPubbleCell, MMLiveCommentPubbleCellFrame;

@interface MMFinderLiveKeepDisplayCommentTableViewCell : MMTableViewCell

@property (retain, nonatomic) MMLiveCommentPubbleCellFrame *pubbleViewCellFrame;
@property (retain, nonatomic) MMLiveCommentPubbleCell *pubbleView;

+ (id)cellIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateTableViewCellWithCellFrame:(id)a0;
- (void).cxx_destruct;

@end
