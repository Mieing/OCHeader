@class AWEStudioComposerEditPageConfig;
@protocol ACCBusinessInputData, ACCUIViewControllerProtocol;

@interface ACCEditBaseServiceContainer : IESStaticContainer

@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCUIViewControllerProtocol> viewController;
@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;

+ (Class)aAWEStudioGlobalConfigClass;
+ (Class)aAWEStudioServiceContainerCommonAdapterClass;

- (id)aAWEStudioGlobalConfig;
- (id)initWithParentContainer:(id)a0 pageConfig:(id)a1;
- (id)aAWEStudioServiceContainerCommonAdapter;
- (id)provideSingleton:(id)a0 ACCEditTransitionServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditViewContainer:(id)a1;
- (id)provideSingleton:(id)a0 ACCBarItemResourceConfigManagerProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditToolBarServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 AWEJSEditorContextProtocol:(id)a1;
- (void).cxx_destruct;

@end
