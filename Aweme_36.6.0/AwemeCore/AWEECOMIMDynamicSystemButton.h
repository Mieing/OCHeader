@class BDPCDDynamicCardTextActionButton, BDPCDDynamicCardSystemButtonModel;

@interface AWEECOMIMDynamicSystemButton : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) BDPCDDynamicCardTextActionButton *contentButton;
@property (retain, nonatomic) BDPCDDynamicCardSystemButtonModel *itemModel;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (id)buttonTextFont;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)buttonHeight;

- (void)clickAction:(id)a0;
- (void)updateWithElememtModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (BOOL)canElementTap;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
