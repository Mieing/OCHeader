@class BDPCDDynamicCardUIElementModel, NSMutableDictionary, BDPCDDynamicCardCustomActionModel, UITapGestureRecognizer;

@interface AWEECOMIMDynamicCardBaseElementView : UIView

@property (retain, nonatomic) UITapGestureRecognizer *elementTap;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *elementTapActionModel;
@property (retain, nonatomic) BDPCDDynamicCardUIElementModel *elementModel;
@property (copy, nonatomic) id /* block */ reloadCallback;
@property (copy, nonatomic) id /* block */ fetchAndReloadCallback;
@property (copy, nonatomic) id /* block */ heightChangeCallback;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (copy, nonatomic) id /* block */ elementGloablActionBlock;
@property (retain, nonatomic) NSMutableDictionary *childCacheDictM;
@property (weak, nonatomic) AWEECOMIMDynamicCardBaseElementView *parentElementView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (struct CGSize { double x0; double x1; })marginAndPaddingSize:(id)a0;
+ (struct CGSize { double x0; double x1; })innerSize:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)heightWihtElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isVisible:(id)a0;

- (void)updateWithElememtModel:(id)a0;
- (id)clickableResourceList;
- (void)onTapCardBackground;
- (double)widthWithElementModel:(id)a0;
- (double)widthWithElementModel:(id)a0 maxWidth:(double)a1;
- (double)childElementWidth;
- (double)heightWithElementModel:(id)a0;
- (BOOL)canElementTap;
- (void)layoutChildElement;
- (id)addChildElementViewBkgView;
- (double)defaultChildVerticalSpace;
- (void)configElementViewCallBack:(id)a0;
- (BOOL)isBusinessElement;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)addChildElementView:(id)a0 model:(id)a1 top:(double)a2 height:(double)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
