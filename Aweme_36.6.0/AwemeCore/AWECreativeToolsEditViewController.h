@class NSString, ACCEditViewControllerInputData;

@interface AWECreativeToolsEditViewController : ACCViewController <ACCEditTransitionContainerViewControllerProtocol>

@property (readonly, nonatomic) ACCEditViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)beforeTransitionSnapshotView;
- (id)initWithBusinessConfiguration:(id)a0;
- (id)editService;
- (void)popSelf;
- (id)handleTargetViewControllerInputData;
- (void)prepareForLoadComponent;
- (void)beforeLoadLazyComponent;
- (id)creatComponentManager;
- (void)configWithInputData:(id)a0;
- (id)beforeTransitionMediaSnapshotView;

@end
