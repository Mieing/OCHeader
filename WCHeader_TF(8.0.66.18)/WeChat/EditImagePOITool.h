@class WCTimelinePOIPickerViewController, NSString, WCLocationInfo, UIView;

@interface EditImagePOITool : EditImageWidgetTool <WCTimelinePOIPickerViewControllerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) WCTimelinePOIPickerViewController *poiPickerViewController;
@property (copy, nonatomic) id /* block */ hiddenStateChangeBlock;
@property (retain, nonatomic) WCLocationInfo *locationInfo;
@property (retain, nonatomic) NSString *poiReportStr4Commit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)onPOIPickerFinished:(id)a0;
- (void)onPOIReportStr4CommitChanged:(id)a0;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)exportAnimatedLayer;
- (void)handlePinchGesture:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handleRotateGesture:(id)a0;
- (void)addShadow:(id)a0;
- (void).cxx_destruct;

@end
