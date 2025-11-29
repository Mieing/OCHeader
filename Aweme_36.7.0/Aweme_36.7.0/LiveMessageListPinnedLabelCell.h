@class UIImageView, UILabel;

@interface LiveMessageListPinnedLabelCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL hasLabelIcon;

- (void)updateWithRoomIntroLabel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
