@class AWEUIPreviewDraggableView;

@interface AWEUIPreviewFloatWindowViewController : UIViewController

@property (retain, nonatomic) AWEUIPreviewDraggableView *draggableView;
@property (nonatomic) BOOL isInPreview;

- (void)closeButtonDidClick;
- (void)previewButtonDidClick;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
