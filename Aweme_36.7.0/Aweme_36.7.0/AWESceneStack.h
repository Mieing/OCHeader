@class AWESceneViewProvider, NSMutableArray, UIView;

@interface AWESceneStack : NSObject

@property (retain, nonatomic) NSMutableArray *sceneQueue;
@property (retain, nonatomic) UIView *viewContainer;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) AWESceneViewProvider *sceneViewProvider;

- (void)registerNotification;
- (void)popScene;
- (void)addSubView:(id)a0 to:(id)a1;
- (void)moveSubview:(id)a0 to:(id)a1;
- (void)removeSubView:(id)a0 from:(id)a1;
- (void)pushScene:(id)a0 duration:(double)a1;
- (void)popSceneWithDuration:(double)a0;
- (id)topScene;
- (void)enterBackgroundNotification;
- (void)enterForegroundNotification;
- (void)pushScene:(id)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
