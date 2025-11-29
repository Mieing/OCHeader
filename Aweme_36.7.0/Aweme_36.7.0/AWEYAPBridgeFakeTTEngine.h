@class NSString, NSURL, TTBridgeRegister, NSObject, UIViewController;
@protocol TTBridgeAuthorization;

@interface AWEYAPBridgeFakeTTEngine : NSObject <TTBridgeEngine>

@property (readonly, weak, nonatomic) UIViewController *sourceController;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, weak, nonatomic) NSObject *sourceObject;
@property (readonly, nonatomic) TTBridgeRegister *bridgeRegister;
@property (retain, nonatomic) id<TTBridgeAuthorization> authorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
