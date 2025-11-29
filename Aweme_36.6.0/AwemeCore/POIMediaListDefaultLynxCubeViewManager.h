@class POIMediaListPageContext, UIViewController, NSString;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListDefaultLynxCubeViewManager : NSObject <AWEPOICubeViewDelegate, POIMediaListExtensionLifeCycleProtocol>

@property (retain, nonatomic) id lynxSyncData;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (id)createLynxViewWithModel:(id)a0 extraParams:(id)a1 delegate:(id)a2;
- (void)updateLynxView:(id)a0 extraParams:(id)a1 withModel:(id)a2;
- (void)reloadLynxView:(id)a0 extraParams:(id)a1 withModel:(id)a2;
- (id)lynxExtraParamsWithMediaModel:(id)a0;
- (id)extraParamsForLynxWithParams:(id)a0;
- (void)registerMethodForLynxView:(id)a0;
- (BOOL)isSameLynxUrl:(id)a0 withAnotherURL:(id)a1;
- (void).cxx_destruct;

@end
