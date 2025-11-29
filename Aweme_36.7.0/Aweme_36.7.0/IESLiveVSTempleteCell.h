@class UIImageView, NSIndexPath, UIView;

@interface IESLiveVSTempleteCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *templateImageView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (retain, nonatomic) NSIndexPath *index;

+ (id)identifier;

- (void)changeToStatus:(unsigned long long)a0;
- (id)imageOfCell;
- (void)setScrollSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)updateWithImage:(id)a0;

@end
