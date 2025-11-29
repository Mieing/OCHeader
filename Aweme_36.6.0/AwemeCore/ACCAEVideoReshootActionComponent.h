@class NSString;
@protocol DVEEditingRuntimeProtocol, ACCAEComponentActionProtocol, ACCAdvanceEditViewModelProtocol, DVERootViewControllerProtocol, DVEPlayerServiceProtocol, DVETrackEventProtocol;

@interface ACCAEVideoReshootActionComponent : ACCAdvanceEditComponent <AWEReshootDelegate>

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<DVERootViewControllerProtocol> rootViewControoler;
@property (weak, nonatomic) id<DVETrackEventProtocol> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (struct _HTSAudioRange { double x0; double x1; })audioRangeWithOffset:(double)a0 duration:(double)a1;
- (void)didReshootWithPublishViewModel:(id)a0;
- (void)clickVideoReshoot:(id)a0;
- (id)reshootStatus:(id)a0;
- (void)trackReshoot;
- (void).cxx_destruct;

@end
