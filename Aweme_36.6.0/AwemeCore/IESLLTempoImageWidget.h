@class IESLLTempoContext, IESLLTempoImageView, UIView, NSString, UIImageView, IESLLTempoAnimationContext, NSMutableArray, UIColor;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoImageWidget : IESLLTempoBaseWidget <IESLLTempoWidgetProtocol>

@property (weak, nonatomic) UIImageView *nodeViewV1;
@property (weak, nonatomic) IESLLTempoImageView *nodeViewV2;
@property (retain, nonatomic) UIColor *customTintColor;
@property (nonatomic) double blurRadius;
@property (nonatomic) BOOL isAutoSize;
@property (nonatomic) struct CGSize { double width; double height; } imgSize;
@property (weak, nonatomic) id<IESLLTempoNodeProtocol> node;
@property (retain, nonatomic) UIView *renderView;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (weak, nonatomic) id<IESLLTempoWidgetProtocol> parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) IESLLTempoAnimationContext *animationContext;
@property (nonatomic) double timeSincePause;
@property (copy, nonatomic) NSString *animationPlayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSelfMeasure;
+ (id)tagName;

- (void)layoutDidFinished;
- (void)propsDidUpdate;
- (void)initializeWidget;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })selfMeasureWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadAttributeSrc;
- (void)loadAttributeMode;
- (struct CGSize { double x0; double x1; })autoSize_selfMeasureWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadImageWithURL:(id)a0 placeholderURL:(id)a1;
- (id)illegalUrlHandler:(id)a0;
- (void)loadAttributeTintColor;
- (void)loadAttributeCapInsets;
- (void)loadAttributeGaussianBlur;
- (id)processCapInsetsImage:(id)a0 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 capInsetsScale:(double)a2;
- (void).cxx_destruct;
- (id)createView;

@end
