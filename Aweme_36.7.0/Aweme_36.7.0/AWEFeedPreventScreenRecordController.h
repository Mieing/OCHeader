@class NSString;

@interface AWEFeedPreventScreenRecordController : AWEBaseController <AWEFeedPlayControlServiceListenerProtocol, AWEFeedPreventScreenRecordControllerProtocol>

@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isPaidStreamControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)screenCapturedDidChange:(id)a0;
- (id)shouldPreventPlayCell:(id)a0 indexPath:(id)a1;
- (BOOL)shouldPreventScreenRecord;
- (void)beforeReturnFromPlay;
- (void)popupToastIfNeeded;
- (BOOL)isPaidMixScreenRecording;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
