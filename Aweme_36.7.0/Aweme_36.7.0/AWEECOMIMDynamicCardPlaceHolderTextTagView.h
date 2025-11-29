@class UILabel, AWEECOMIMDynamicCardCommonDiffBorderRadiusView;

@interface AWEECOMIMDynamicCardPlaceHolderTextTagView : UIView

@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView *bkgView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (copy, nonatomic) id /* block */ clickActionBlock;

+ (struct CGSize { double x0; double x1; })sizeWithTagModel:(id)a0;

- (void)onTapView;
- (void)updateViewWithTagModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
