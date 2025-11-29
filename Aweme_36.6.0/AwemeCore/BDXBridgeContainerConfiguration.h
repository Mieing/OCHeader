@class NSString, NSSet, UIView, NSObject, UIViewController;

@interface BDXBridgeContainerConfiguration : NSObject

@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL onlyUseStandardMethods;
@property (copy, nonatomic) NSSet *allowsMethodNames;
@property (nonatomic) BOOL enableAnniePiperMethodsForCommonBiz;
@property (nonatomic) BOOL shouldUseAnniePro;
@property (copy, nonatomic) NSString *apAppId;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIView *cardView;
@property (weak, nonatomic) UIView *kitView;
@property (weak, nonatomic) NSObject *kitBridgeWrapper;
@property (nonatomic) BOOL shouldExecutorsApplyCustomOrder;

- (void).cxx_destruct;

@end
