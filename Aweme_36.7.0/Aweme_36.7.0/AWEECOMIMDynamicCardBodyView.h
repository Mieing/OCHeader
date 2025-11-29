@class UIImageView, UILabel, AWEECOMIMDynamicCardSecondaryInfoView;

@interface AWEECOMIMDynamicCardBodyView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIImageView *extraImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *bkgImageView;
@property (retain, nonatomic) AWEECOMIMDynamicCardSecondaryInfoView *secondaryInfoView;
@property (retain, nonatomic) AWEECOMIMDynamicCardSecondaryInfoView *secondaryInfoViewTwo;
@property (retain, nonatomic) AWEECOMIMDynamicCardSecondaryInfoView *secondaryInfoViewThree;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)designHeightWithImageType:(long long)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:(id)a0 model:(id)a1 top:(double)a2 height:(double)a3;
- (void)updateBodyViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
