@class UIImageView, UILabel, UIView;

@interface AWEIMGroupMemberListInactiveTitleCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *nextTapImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;

+ (struct CGSize { double x0; double x1; })itemSize:(id)a0;
+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
