@class UILabel, AWEFriendStyleCommentCountCellFrame;

@interface AWEModernFeedFriendStyleCommentCountCell : AWEFriendStyleBaseCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEFriendStyleCommentCountCellFrame *commentCountCellFrame;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isInsStyle:(BOOL)a2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;

@end
