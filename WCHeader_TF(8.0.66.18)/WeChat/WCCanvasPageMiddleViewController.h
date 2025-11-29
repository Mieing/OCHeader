@class WCCanvasPageViewController, NSString;

@interface WCCanvasPageMiddleViewController : MMUIViewController <WCCanvasPageViewControllerExt>

@property (retain, nonatomic) WCCanvasPageViewController *canvasPageVC;
@property (nonatomic) BOOL hasJumped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCanvasPageVC:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)onCanvasViewDidBePushed;
- (void).cxx_destruct;

@end
