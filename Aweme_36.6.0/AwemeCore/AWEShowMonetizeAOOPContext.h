@class UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBaseViewControllerProtocol, AWEShowMonetizeAOOPConfigProtocol;

@interface AWEShowMonetizeAOOPContext : NSObject

@property (weak, nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionViewControllerProtocol> *container;
@property (nonatomic) long long executedRules;
@property (readonly, nonatomic) id<AWEShowMonetizeAOOPConfigProtocol> config;

+ (BOOL)shouldCreateWithContainer:(id)a0;

- (id)createConfig;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
