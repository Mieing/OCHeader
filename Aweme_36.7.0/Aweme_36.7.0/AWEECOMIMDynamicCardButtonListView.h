@class NSMutableDictionary, UIView;

@interface AWEECOMIMDynamicCardButtonListView : AWEECOMIMDynamicCardButtonGroupView

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) NSMutableDictionary *customActionModelDict;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)onButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
