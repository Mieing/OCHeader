@class NSString, NSDictionary, AWEKefuFloatingWindowBaseStateConfig, NSObject, UIViewController;
@protocol BDXBridgeContainerProtocol;

@interface AWEKefuFloatingWindowConfig : NSObject

@property (retain, nonatomic) NSString *windowId;
@property (retain, nonatomic) NSString *dragDeleteText;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (retain, nonatomic) AWEKefuFloatingWindowBaseStateConfig *stateConfig;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSObject<BDXBridgeContainerProtocol> *bridgeContainer;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidWithError:(id *)a0;

@end
