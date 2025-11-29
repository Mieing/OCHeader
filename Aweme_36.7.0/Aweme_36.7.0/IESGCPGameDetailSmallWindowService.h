@class NSString, UIViewController;

@interface IESGCPGameDetailSmallWindowService : NSObject <IESGCPDIContextSubscriber, IESGCPAudienceDetailActions, IESGCPAudienceDetailSmallWindowRouter>

@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isManualClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferOptions;
- (void)didSetGameCPDIContext;
- (void)showLiveFloatWindow:(BOOL)a0 extraParam:(id)a1;
- (void)audienceDetailVCFullHalfScreenStatusDidChange:(BOOL)a0;
- (void)gameDetailVC_viewDidAppear:(BOOL)a0 gameDetailVC:(id)a1;
- (void)gameDetailVC_viewWillDisAppear:(BOOL)a0 gameDetailVC:(id)a1;
- (void)willCloseGameDetailView:(BOOL)a0;
- (void)_registerGlobalSmallWindowServiceAllowList;
- (void)_unregisterGlobalSmallWindowServiceAllowList;
- (void)hideSmallWindow;
- (void)showSmallWindowWithParam:(id)a0;
- (BOOL)canShowSmallWidow;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (void)dealloc;

@end
