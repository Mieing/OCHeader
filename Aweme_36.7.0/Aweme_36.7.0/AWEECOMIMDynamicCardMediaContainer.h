@class NSArray, UIView;

@interface AWEECOMIMDynamicCardMediaContainer : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;
@property (copy, nonatomic) NSArray *childElementViewArr;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWithElemntViewArr:(id)a0;

- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (struct CGSize { double x0; double x1; })mediaSizeWithMideaViewArr:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
