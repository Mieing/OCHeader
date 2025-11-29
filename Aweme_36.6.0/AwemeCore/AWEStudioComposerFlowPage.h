@class UINavigationController, NSString, AWEVideoPublishViewModel, UIViewController;

@interface AWEStudioComposerFlowPage : NSObject

@property (readonly, nonatomic) NSString *creationID;
@property (readonly, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) UIViewController *firstViewController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, nonatomic) UIViewController *containerViewController;

- (void)dismissPageAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end
