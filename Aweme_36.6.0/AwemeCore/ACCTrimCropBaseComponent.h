@class AWEVideoPublishViewModel;
@protocol ACCTrimCropEditorController, IESServiceProvider;

@interface ACCTrimCropBaseComponent : NSObject

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, weak, nonatomic) id<ACCTrimCropEditorController> container;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (id)serviceBinding;
- (id)serviceBindingArray;
- (void)componentDidLoad;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)willTransitionIn;

@end
