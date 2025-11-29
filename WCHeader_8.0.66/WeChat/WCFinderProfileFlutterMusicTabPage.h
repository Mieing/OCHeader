@class NSString, MMFlutterViewController;

@interface WCFinderProfileFlutterMusicTabPage : WCFinderStreamProfileViewPage <WCFinderTingProfileEventStoreExt>

@property (retain, nonatomic) MMFlutterViewController *flutterVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (id)loadView;
- (void)viewDidAppear;
- (void)viewWillApear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)pageSizeDidChanged;
- (void)updateflutterViewFrameSize;
- (double)originY30percent;
- (id)embedApiPlugin;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onReceiveMusicEventRefreshList;
- (void).cxx_destruct;

@end
