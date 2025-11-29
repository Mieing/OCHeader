@class EmoticonCellLikeButton, UIImageView, UILabel;
@protocol EmoticonSearchCollectionComponentDelegate;

@interface EmoticonSearchFooterView : UICollectionReusableView

@property (retain, nonatomic) EmoticonCellLikeButton *button;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<EmoticonSearchCollectionComponentDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapWebSearchButton;
- (void).cxx_destruct;

@end
