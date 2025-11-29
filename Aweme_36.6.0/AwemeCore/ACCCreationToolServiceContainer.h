@class AWEStudioComposerEditPageConfig;

@interface ACCCreationToolServiceContainer : IESStaticContainer

@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;

- (id)initWithParentContainer:(id)a0 pageConfig:(id)a1;
- (id)provide:(id)a0 ACCCreationDataInternalProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCCreationToolManager:(id)a1;
- (void).cxx_destruct;

@end
