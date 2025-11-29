@class UIImageView, UILabel;

@interface MMFinderLiveFansGroupAnchorEditTableGiftItemCell : MMFinderLiveFansGroupAnchorEditTableCellBase

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *attachedTextLabel;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithGiftItem:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
