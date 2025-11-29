@class UIImageView, UIView;

@interface MMAuthorizeGameInfoHalfScreenTableCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) UIView *topSeperatorLine;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSelectedImageView;
- (void)setupHighlightMask;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
