@class NSString;

@interface IESECLiveIMFactoryAdapter : NSObject <IESECLiveIMFactoryAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)workerWithConfig:(id)a0 subscriber:(id)a1;

@end
