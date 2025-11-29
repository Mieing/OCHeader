@class UIColor, NSString, EditImageTextView, WCEditViewControllerUIConfig, UIView, CATextLayer;
@protocol EditImageTextToolV2Delegate;

@interface EditImageTextToolV2 : EditImageWidgetTool {
    CATextLayer *_tlayer;
    double _strWidth;
    double _maxWidth;
    double _strHeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageFrame;
    struct CGPoint { double x; double y; } _screenCenter;
    UIView *_superView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _editViewFrame;
}

@property (nonatomic) double zoomScaleWhenInit;
@property (nonatomic) double _lineWidth;
@property (retain, nonatomic) UIColor *_lineColor;
@property (retain, nonatomic) EditImageTextView *textView;
@property (copy, nonatomic) NSString *_displayStr;
@property (nonatomic) double textViewSafeAreaWidth;
@property (nonatomic) unsigned long long textStyle;
@property (weak, nonatomic) id<EditImageTextToolV2Delegate> textDelegate;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) WCEditViewControllerUIConfig *uiConfig;

+ (id)generateWidgetFromState:(id)a0;

- (id)initWithEditViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetToInitStateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mutableCopy;
- (void)createTrueTextLayer;
- (void)reloadTextColor;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (id)exportAnimatedLayer;
- (BOOL)startEditingText;
- (void)confirmEditText:(id)a0 withColor:(id)a1 style:(unsigned long long)a2;
- (void)cancelEditText:(id)a0;
- (id)exportWidgetStateForEditorFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 assetPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
