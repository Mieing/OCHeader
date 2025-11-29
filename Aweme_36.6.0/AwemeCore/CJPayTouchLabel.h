@class NSString, NSMutableArray, NSMutableDictionary;

@interface CJPayTouchLabel : UILabel <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableArray *attributeStrings;
@property (retain, nonatomic) NSMutableDictionary *effectDic;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cj_addAttributeTapActionWithStrings:(id)a0 tapClicked:(id /* block */)a1;
- (void)cj_addAttributeTapActionWithAttributeModels:(id)a0 tapClicked:(id /* block */)a1;
- (void)p_removeAttributeTapActions;
- (void)p_getRangesWithStrings:(id)a0;
- (void)p_getRangesWithAttributeModels:(id)a0;
- (BOOL)p_getTapFrameWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 result:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })p_textSizeWithAttributedString:(id)a0 width:(float)a1 numberOfLines:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getLineBounds:(struct __CTLine { } *)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForCoreText;
- (double)p_getLineOrign:(struct __CTLine { } *)a0;
- (id)p_getStringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
