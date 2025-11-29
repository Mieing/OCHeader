@class NSString, ACCAIEditConflictManager;
@protocol ACCEditServiceProtocol, ACCRealLivePhotoService;

@interface ACCAIEditorConflictComponent : ACCFeatureComponent <ACCAIEditConflictManagerSubscription, ACCFeatureComponentReloadableProtocol, ACCRealLivePhotoServiceSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCRealLivePhotoService> realLivePhotoService;
@property (retain, nonatomic) ACCAIEditConflictManager *conflictManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)AIEditorConflictHeadChange;
- (void)livePhotoDidChangeMode:(unsigned long long)a0;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)componentDidReload;
- (void)componentWillReload;
- (void)observerLivePhotoSignal;
- (void).cxx_destruct;

@end
