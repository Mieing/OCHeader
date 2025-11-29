@class NSString, IESLiveRevenueInteractLynxComponent;

@interface IESLiveRevenueInteractLynxLinkCenter : NSObject <IESLiveLynxCenterAutoMatchService>

@property (retain, nonatomic) IESLiveRevenueInteractLynxComponent *linkerCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)bindAction;
- (void)startAutoMatch:(id)a0;
- (void)endAutoMatch:(id)a0;
- (void)didTapSpeedUp:(id)a0;
- (void)loadLynxLinkerCenter;
- (void).cxx_destruct;

@end
