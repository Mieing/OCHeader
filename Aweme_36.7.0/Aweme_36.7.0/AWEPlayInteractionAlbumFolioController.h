@class NSString, AFDAlbumFolioView;

@interface AWEPlayInteractionAlbumFolioController : AWEPlayInteractionNewBaseController <AFDPlayInteractionRichContentExtension>

@property (retain, nonatomic) AFDAlbumFolioView *folioView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
+ (unsigned long long)controllerLazyLoadStrategy;
+ (BOOL)canShowRightTopFolio:(id)a0 context:(id)a1;
+ (BOOL)canShowRightTopFolioWithNote:(id)a0;
+ (BOOL)isSlidesAndShouldBanFolio:(id)a0;

- (void)setHide:(BOOL)a0;
- (void)richAwemeWillBeginDragging;
- (void)richAwemeDidEndDragging;
- (void)richContentContainerWillBeginDragging:(id)a0;
- (void)richContentContainerDidEndDragging:(id)a0;
- (void)updateFolioInfo;
- (struct AWEAlbumFolioInfo { long long x0; long long x1; })getCurrentFolioInfo;
- (void)setupConetext;
- (BOOL)canShowRightTopFolio;
- (BOOL)canShowRightTopFolioWithNote;
- (BOOL)isSlidesAndShouldBanFolio;
- (BOOL)leftContainerHasBullet;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;

@end
