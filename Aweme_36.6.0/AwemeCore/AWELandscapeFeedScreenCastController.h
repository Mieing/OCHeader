@class NSString;

@interface AWELandscapeFeedScreenCastController : AWELandscapeFeedBaseController <AWEScreenCastVideoDelegate, AWELandscapeFeedScreenCastControllerProtocol>

@property (nonatomic) BOOL isAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)curSceneString;
- (id)screenCastVideoDelegate;
- (void)enterInnerListWithUpdateScreenCastDatas:(BOOL)a0;
- (void)updateScreenCastModels;
- (void)castPlayVideoDidChange:(id)a0;
- (id)screenCastCurReferString;
- (BOOL)isScreenCastInLandscape;
- (void)castPlayVideoDidChangeFromModel:(id)a0 toModel:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
