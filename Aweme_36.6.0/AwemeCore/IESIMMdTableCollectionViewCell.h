@class UILabel, UIView, IESIMTextKitLabel;
@protocol IESIMMdTableCollectionViewCellDelegate;

@interface IESIMMdTableCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESIMTextKitLabel *textLabel;
@property (retain, nonatomic) UIView *topLine;
@property (weak, nonatomic) id<IESIMMdTableCollectionViewCellDelegate> delegate;

+ (struct CGSize { double x0; double x1; })calculateHeightForAttrStr:(id)a0 preferedMaxWidth:(double)a1;

- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithContext:(id)a0;
- (void)labelTapped:(id)a0;

@end
