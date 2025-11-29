@class MMHeadImageView, MMCPLabel, UIImageView, UIView, MMLiveUserStateItem;
@protocol MMLiveOnlineStateCollectionCellDelegate;

@interface MMLiveOnlineStateCollectionCell : UICollectionViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *displayNameLabel;
@property (retain, nonatomic) MMLiveUserStateItem *onlineUserItem;
@property (retain, nonatomic) UIImageView *banCommentIconImageView;
@property (retain, nonatomic) UIView *selectedView;
@property (weak, nonatomic) id<MMLiveOnlineStateCollectionCellDelegate> cellDelegate;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithOnlineUserItem:(id)a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)onHeadImageClicked:(id)a0;
- (void).cxx_destruct;

@end
