@class NSArray, AWEPlayInteractionDescriptionContext, AWEPlayInteractionDescriptionElementConfig;

@interface AWEPlayInteractionDescriptionControllerDispatcherManager : NSObject

@property (retain, nonatomic) NSArray *conterllerArray;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (retain, nonatomic) AWEPlayInteractionDescriptionElementConfig *elementConfig;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (void)layoutElementView;
- (void)descriptionLabelDidClickIsExpand:(BOOL)a0;
- (BOOL)isDetailPageShowing;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
