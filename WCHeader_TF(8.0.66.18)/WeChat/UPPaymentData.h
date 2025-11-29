@class NSString, UIViewController, UPReachability;

@interface UPPaymentData : NSObject

@property (copy, nonatomic) NSString *schemeURL;
@property (copy, nonatomic) NSString *tn;
@property (copy, nonatomic) NSString *mode;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UPReachability *internetReachability;
@property (copy, nonatomic) NSString *networkMode;
@property (copy, nonatomic) NSString *appServer;
@property (copy, nonatomic) NSString *jarServer;
@property (nonatomic) struct CGSize { double width; double height; } toRotationSize;

+ (id)sharedData;

- (id)initCommon;
- (void)reachabilityChanged:(id)a0;
- (void)updateNetworkMode:(long long)a0;
- (id)deviceInfo;
- (void).cxx_destruct;

@end
