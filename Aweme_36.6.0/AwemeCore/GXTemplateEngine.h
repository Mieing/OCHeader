@class GXLayoutManager, NSBundle, GXRenderManager;

@interface GXTemplateEngine : NSObject

@property (retain, nonatomic) GXRenderManager *renderManager;
@property (retain, nonatomic) GXLayoutManager *layoutManager;
@property (retain, nonatomic) NSBundle *mainBundle;
@property (nonatomic) BOOL adjustFloatPosition;
@property (nonatomic) BOOL isNeedFlat;

+ (id)sharedInstance;

- (struct CGSize { double x0; double x1; })sizeWithTemplateItem:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1;
- (id)creatViewByTemplateItem:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1;
- (void)bindData:(id)a0 onView:(id)a1;
- (struct CGSize { double x0; double x1; })sizeWithTemplateItem:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1 data:(id)a2;
- (id)loadTemplateContentWithTemplateItem:(id)a0;
- (void)bindData:(id)a0 measureSize:(struct CGSize { double x0; double x1; })a1 onRootView:(id)a2;
- (id)queryTemplateDataWithView:(id)a0;
- (id)queryViewByNodeId:(id)a0 rootView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNodeFrameWithView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
