@class DVEVCContext, NSArray, DVEPreview, NSString, UILabel, UIView;
@protocol DVEEditingRuntimeProtocol, DVECoreCanvasProtocol;

@interface DVEEditPreviewViewController : UIViewController <DVECoreActionDelegate, DVEPreviewAlignmentDelegate, DVEPreviewRotationDelegate, DVEPreviewEdgeDelegate>

@property (weak, nonatomic) id<DVECoreCanvasProtocol> canvasEditor;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (retain, nonatomic) NSArray *hAlignLines;
@property (retain, nonatomic) NSArray *vAlignLines;
@property (retain, nonatomic) UIView *RotationHint;
@property (retain, nonatomic) UILabel *RotationAngle;
@property (retain, nonatomic) UILabel *RotationSymbol;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (nonatomic) BOOL magneticH;
@property (nonatomic) BOOL magneticV;
@property (nonatomic) BOOL magneticRotation;
@property (nonatomic) BOOL magneticLeft;
@property (nonatomic) BOOL magneticRight;
@property (nonatomic) BOOL magneticTop;
@property (nonatomic) BOOL magneticBottom;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) DVEPreview *preview;
@property (retain, nonatomic) UIView *previewRenderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)undoRedoClikedByUser;
- (void)setImpactAction;
- (void)updatePreviewSize;
- (void)setMagneticImpact;
- (void)setHintSubviews;
- (void)showCanvasBorderIfNeededEnableGesture:(BOOL)a0;
- (void)onHorizontalAlignmentMagneting:(BOOL)a0;
- (void)onVerticalAlignmentMagneting:(BOOL)a0;
- (void)showRotationAngle:(id)a0;
- (void)isshowRotationAngle:(BOOL)a0 Angle:(int)a1;
- (void)isshowTopLine:(BOOL)a0;
- (void)isshowBottomLine:(BOOL)a0;
- (void)isshowLeftLine:(BOOL)a0;
- (void)isshowRightLine:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupUI;

@end
