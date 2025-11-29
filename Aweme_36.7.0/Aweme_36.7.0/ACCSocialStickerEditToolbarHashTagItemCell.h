@class UILabel, UIView;

@interface ACCSocialStickerEditToolbarHashTagItemCell : ACCSocialStickerEditToolbarBaseItemCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *hashTagLabel;
@property (retain, nonatomic) UIView *loadingLabelFakeView;

+ (struct CGSize { double x0; double x1; })maxContentDisplaySize;
+ (struct CGSize { double x0; double x1; })sizeWithHashTag:(id)a0;
+ (id)realDisplayHashTagStringWithModel:(id)a0;

- (void)configWithHashTag:(id)a0;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setup;

@end
