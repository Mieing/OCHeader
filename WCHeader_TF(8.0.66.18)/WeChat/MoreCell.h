@class UIImageView, MMUILabel, UIView;

@interface MoreCell : UICollectionViewCell {
    UIView *m_iconView;
    MMUILabel *m_descLabel;
}

@property (retain, nonatomic) UIImageView *icon;
@property (nonatomic) BOOL isSelected;

+ (id)identifier;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
