@class UIColor, NSString, EditImageTextView, WCEditViewControllerUIConfig, UIView, CATextLayer;
@protocol EditImageTextToolDelegate;

@interface EditImageTextTool : EditImageWidgetTool <EditImageTextInputDelegate> {
    CATextLayer *_tlayer;
    double _strWidth;
    double _maxWidth;
    double _strHeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageFrame;
    struct CGPoint { double x; double y; } _screenCenter;
    double _zoomScaleWhenInit;
    UIView *_superView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _editViewFrame;
}

@property (weak, nonatomic) id<EditImageTextToolDelegate> textDelegate;
@property (nonatomic) double _lineWidth;
@property (retain, nonatomic) UIColor *_lineColor;
@property (retain, nonatomic) EditImageTextView *textView;
@property (copy, nonatomic) NSString *_displayStr;
@property (nonatomic) double textViewSafeAreaWidth;
@property (retain, nonatomic) UIColor *confirmBtnColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textInputViewFrame;
@property (retain, nonatomic) WCEditViewControllerUIConfig *uiConfig;
@property (nonatomic) unsigned long long textStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEditViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mutableCopy;
- (void)resetToInitStateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createTextLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCenterPoint:(struct CGPoint { double x0; double x1; })a1 withSuperView:(id)a2;
- (void)createTrueTextLayer;
- (void)reloadTextColor;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)exportAnimatedLayer;
- (BOOL)startEditingText;
- (void)changeEditText:(id)a0 withColor:(id)a1 style:(unsigned long long)a2 backgroundColor:(id)a3;
- (void)confirmEditText:(id)a0 withColor:(id)a1 style:(unsigned long long)a2 backgroundColor:(id)a3;
- (void)cancelEditText:(id)a0;
- (void).cxx_destruct;

@end
