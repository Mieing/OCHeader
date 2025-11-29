@class CMCScene;

@interface CMCSceneController : CMCObject

@property (weak, nonatomic) CMCScene *scene;

- (void).cxx_destruct;
- (void)sceneDidLoad;

@end
