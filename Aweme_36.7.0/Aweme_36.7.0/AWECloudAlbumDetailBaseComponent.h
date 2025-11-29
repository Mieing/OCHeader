@protocol AWECloudAlbumDetailControllerProtocol, IESServiceProvider;

@interface AWECloudAlbumDetailBaseComponent : NSObject

@property (readonly, weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, weak, nonatomic) id<AWECloudAlbumDetailControllerProtocol> container;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (id)serviceBinding;
- (void)componentDidLoad;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
