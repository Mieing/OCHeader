@class UILabel;
@protocol IESServiceProvider;

@interface ACCEditDebugInfoComponent : ACCFeatureComponent {
    id<IESServiceProvider> serviceProvider;
}

@property (retain, nonatomic) UILabel *fpsLabel;

- (void)componentDidMount;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)dealloc;

@end
