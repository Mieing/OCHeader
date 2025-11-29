@class NSString;

@interface AWEAwemePreventScreenRecordingController : AWEAwemeNewDetailBaseController <AWEFeedPreventScreenRecordControllerProtocol>

@property (nonatomic) BOOL isDisappear;
@property (nonatomic) BOOL isShowingToast;
@property (nonatomic) BOOL isPaidStreamControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willPlay;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)screenCapturedDidChange:(id)a0;
- (BOOL)shouldPreventScreenRecord;
- (void)popupToastIfNeeded;
- (BOOL)isPaidMixScreenRecording;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
