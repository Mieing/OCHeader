@protocol AWECoverEditorNLEEditorLayoutManager;

@interface AWEVideoCoverEditorLayoutComponent : ACCFeatureComponent

@property (weak, nonatomic) id<AWECoverEditorNLEEditorLayoutManager> layoutManager;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
