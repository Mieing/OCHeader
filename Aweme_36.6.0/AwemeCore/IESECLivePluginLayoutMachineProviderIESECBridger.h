@class NSString;
@protocol HTSLivePluginLayoutMachineProvider;

@interface IESECLivePluginLayoutMachineProviderIESECBridger : NSObject <IESECLivePluginLayoutMachineProvider>

@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

@end
