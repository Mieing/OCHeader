@class DitoPageContext, AWEPOIAlbumLynxParamModel, NSString, UIView;
@protocol AWEPOIAlbumLynxPagerControllerDelegate, BDXViewContainerProtocol;

@interface AWEPOIAlbumLynxPagerController : UIViewController <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (retain, nonatomic) AWEPOIAlbumLynxParamModel *paramModel;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (weak, nonatomic) id<AWEPOIAlbumLynxPagerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)loadTemplate;
- (id)initWithContext:(id)a0 paramModel:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
