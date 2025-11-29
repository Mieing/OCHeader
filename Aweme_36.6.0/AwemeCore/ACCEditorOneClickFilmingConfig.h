@class NSString, ACCEditorOneClickFilmingInputData;

@interface ACCEditorOneClickFilmingConfig : NSObject <ACCBusinessConfiguration>

@property (retain, nonatomic) ACCEditorOneClickFilmingInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)a0;
- (id)routerCoordinator;
- (id)sourceParentContainer;
- (id)initWithInputData:(id)a0;
- (void).cxx_destruct;

@end
