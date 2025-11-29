@class NSMutableDictionary, MMUIButtonChainModel;

@interface MMUIButton : UIButton

@property (readonly, copy, nonatomic) MMUIButtonChainModel *zz_setup;
@property (retain, nonatomic) NSMutableDictionary *imageDict;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;
@property (nonatomic) long long expandHitWidth;
@property (nonatomic) long long expandHitHeight;
@property (nonatomic) BOOL autoExpandHitArea;
@property (retain, nonatomic) id customObject;
@property (nonatomic) BOOL absorbAction;
@property (nonatomic) BOOL wantsExtendedDynamicRangeContent;
@property (nonatomic) double edrHeadroom;
@property (nonatomic) double intrinsicContentHorizontalMargin;
@property (nonatomic) double intrinsicContentVerticalMargin;

+ (id /* block */)zz_create;

- (void)updateWithDirection:(unsigned long long)a0 spacing:(double)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fitHoverStyle;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setNormalImage:(id)a0 selectedImage:(id)a1;
- (void)adjustTrimmedTextWhenBoldByClipping;
- (void)adjustTrimmedTextWhenBoldByAutoFont;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;

@end
