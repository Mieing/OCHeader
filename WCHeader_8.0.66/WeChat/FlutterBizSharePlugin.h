@class NSString, MMFlutterViewController, FlutterBizShareHandler;
@protocol BrandTLViewControllerProtocol;

@interface FlutterBizSharePlugin : NSObject <MMFlutterPlugin, BizShareApi>

@property (weak, nonatomic) MMFlutterViewController<BrandTLViewControllerProtocol> *viewController;
@property (retain, nonatomic) FlutterBizShareHandler *flutterBizShareHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onAttachedToEngine:(id)a0;
- (void)showShareMenuInfo:(id)a0 completion:(id /* block */)a1;
- (id)getBizFlutterShareHandler;
- (void).cxx_destruct;

@end
