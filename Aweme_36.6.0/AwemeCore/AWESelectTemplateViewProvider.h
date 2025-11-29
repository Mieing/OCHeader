@class UIViewController, UIView;

@interface AWESelectTemplateViewProvider : AWESceneViewProvider

@property (retain, nonatomic) UIView *playerContainer;
@property (nonatomic) BOOL isCartoonFace;
@property (weak, nonatomic) UIViewController *rootController;
@property (nonatomic) BOOL needAdvanceTemplate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPlayerFrame;
- (double)changeTemplateFooterHeight;
- (double)changeTemplateViewHeight;
- (void)zoomOutToFullScreen;
- (double)selectTemplateViewHeight;
- (double)selectTemplateFooterHeight;
- (id)initWithRootController:(id)a0;
- (void).cxx_destruct;
- (void)zoomIn;

@end
