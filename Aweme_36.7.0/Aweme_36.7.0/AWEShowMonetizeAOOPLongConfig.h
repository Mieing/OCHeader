@class NSString, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBaseViewControllerProtocol;

@interface AWEShowMonetizeAOOPLongConfig : NSObject <AWEShowMonetizeAOOPConfigProtocol>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionViewControllerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldCreateWithContainer:(id)a0;

- (BOOL)shouldActive;
- (long long)supportRules;
- (void).cxx_destruct;
- (unsigned long long)videoType;
- (id)initWithContainer:(id)a0;

@end
