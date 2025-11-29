@class IESGCPAudienceDetailView, IESGCPGameDetailSmallWindowService, NSString, IESGCPGameDetailPlayerScaleService;

@interface IESGCPAudienceDetailViewController : IESGCPBaseDetailViewController <IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPAudienceDetailView *audienceDetailView;
@property (retain, nonatomic) IESGCPGameDetailSmallWindowService *smallWindowService;
@property (retain, nonatomic) IESGCPGameDetailPlayerScaleService *playerScaleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (id)initWithRouterModel:(id)a0;
- (BOOL)livePowerSaveClearEnable;
- (void)handleFullScreenStatusDidChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)detailView;

@end
