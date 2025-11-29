@class UILabel;

@interface AWEECOMIMDynamicCardHeaderView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *stateLabel;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)headerViewHeightWithLeftInfoModel:(id)a0 statusModel:(id)a1;

- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)updateHeaderViewWithLeftInfoModel:(id)a0 statusModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
