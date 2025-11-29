@class FWFInstanceManager, NSString;

@interface FWFWebViewFactory : NSObject <FlutterPlatformViewFactory>

@property (weak, nonatomic) FWFInstanceManager *instanceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
