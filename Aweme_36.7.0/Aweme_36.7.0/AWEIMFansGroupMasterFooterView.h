@class UILabel, UIView;

@interface AWEIMFansGroupMasterFooterView : UICollectionReusableView

@property (retain, nonatomic) UIView *dottedLineView;
@property (retain, nonatomic) UILabel *label;

+ (id)identifier;

- (void)setDottedLineViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
