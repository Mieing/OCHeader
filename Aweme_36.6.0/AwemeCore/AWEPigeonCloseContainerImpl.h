@class NSString;

@interface AWEPigeonCloseContainerImpl : NSObject <AWEIronManPigeonProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pigeonMethodName;
+ (id)create;

- (void)callMethod:(id)a0 arguments:(id)a1 completion:(id /* block */)a2;

@end
