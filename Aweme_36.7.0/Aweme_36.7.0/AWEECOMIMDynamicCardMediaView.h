@class UIImageView, AWEECOMIMDynamicFootNoteView;

@interface AWEECOMIMDynamicCardMediaView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIImageView *coverImgView;
@property (retain, nonatomic) AWEECOMIMDynamicFootNoteView *footNoteView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UIImageView *bgMaskView;

+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;

- (id)createImageWithMaskLayerColors:(id)a0 itemHeight:(double)a1;
- (void)updateWithElememtModel:(id)a0;
- (void)onTapCardBackground;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
