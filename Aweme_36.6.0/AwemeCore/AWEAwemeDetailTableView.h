@class AWEAwemeDetailTableViewController, NSString;

@interface AWEAwemeDetailTableView : AWEFeedDataSafeTableView <AWETableViewAccessibilityFixProtocol>

@property (weak, nonatomic) AWEAwemeDetailTableViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)awe_shouldFixAccessibilityScroll;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)enableSlideDefaultConfig;
- (void)reportDataInconsistency:(id)a0;
- (void)beginUpdates;
- (void)endUpdates;
- (void)reloadData;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;

@end
