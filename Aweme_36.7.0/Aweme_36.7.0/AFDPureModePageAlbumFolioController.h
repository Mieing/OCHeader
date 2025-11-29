@class NSString, AFDAlbumFolioView;

@interface AFDPureModePageAlbumFolioController : AWEBaseController <AFDPureModePageControllerProtocol>

@property (retain, nonatomic) AFDAlbumFolioView *folioView;
@property (nonatomic) BOOL hasEnterFullScreenMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillBeginDragging:(id)a0;
- (void)containerDidEndDragging:(id)a0;
- (void)updateFolioInfo;
- (struct AWEAlbumFolioInfo { long long x0; long long x1; })getCurrentFolioInfo;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupContext;
- (void)viewDidDisappear;

@end
