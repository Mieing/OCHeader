@class NSString, ACCAETrackLinkageViewModel;
@protocol DVEMulitpleTrackViewServiceProtocol, DVECoreActionServiceProtocol;

@interface ACCAETrackLinkageComponent : ACCAdvanceEditComponent <DVECoreActionDelegate>

@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (retain, nonatomic) ACCAETrackLinkageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
