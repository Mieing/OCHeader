@class NSString;
@protocol ACCAdvanceEditPageService, ACCAdvanceEditDataRepository;

@interface ACCAdvanceEditComponent : ACCFeatureComponent <ACCAdvanceEditComponent>

@property (weak, nonatomic) id<ACCAdvanceEditPageService> pageService;
@property (weak, nonatomic) id<ACCAdvanceEditDataRepository> dataRepository;
@property (nonatomic, getter=isMounted) BOOL mounted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncDataOnWillTransitionIn;
- (void)syncDataOnSaveWithPublishModel:(id)a0;
- (void)syncDataForLiveDraftWithPublishModel:(id)a0;
- (void).cxx_destruct;

@end
