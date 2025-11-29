@class HunterContainerViewModel, NSString, HunterContext, UIView, UIViewController;
@protocol AnnieXContainerBaseProtocol, HunterContainerProtocol, HunterViewControllerProtocol;

@interface HunterBasePlugin : NSObject <HunterPluginProtocol>

@property (weak, nonatomic) UIView<HunterContainerProtocol> *hunterContainerView;
@property (weak, nonatomic) UIViewController<HunterViewControllerProtocol> *hunterVC;
@property (weak, nonatomic) id<AnnieXContainerBaseProtocol> containerVC;
@property (weak, nonatomic) HunterContainerViewModel *viewModel;
@property (weak, nonatomic) HunterContext *hunterContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldActive;
- (void).cxx_destruct;

@end
