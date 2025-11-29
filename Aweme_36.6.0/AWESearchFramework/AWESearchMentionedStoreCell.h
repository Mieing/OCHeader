@class UIImageView, UILabel;

@interface AWESearchMentionedStoreCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *itemLabel;
@property (nonatomic) struct CGSize { double width; double height; } iconViewSize;
@property (nonatomic) struct CGSize { double width; double height; } itemLabelSize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
