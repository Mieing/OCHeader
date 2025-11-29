@class UILongPressGestureRecognizer, NSString;
@protocol MMTransparentButtonDelegate;

@interface MMTransparentButton : MMUIButton <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILongPressGestureRecognizer *customLongPressGesture;
@property (nonatomic) BOOL m_bScale;
@property (weak, nonatomic) id<MMTransparentButtonDelegate> m_delegate;
@property (nonatomic) struct CGPoint { double x; double y; } m_pTouchLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)recordTouchLocationwithEvent:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
