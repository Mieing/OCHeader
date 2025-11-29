@class WCStoryComment, MMHeadImageView, MMCPLabel;
@protocol WCStoryFriendVisitHeadCellDelegate;

@interface WCStoryFriendVisitHeadCell : UICollectionViewCell

@property (retain, nonatomic) WCStoryComment *comment;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *userNameLabel;
@property (weak, nonatomic) id<WCStoryFriendVisitHeadCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)updateUI;
- (void)onClickHeadView;
- (void).cxx_destruct;

@end
