@class NSString;

@interface IESECLivePitayaService : NSObject <IESECLivePitayaServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerMessageHandler:(id)a0 callback:(id /* block */)a1;
+ (void)removeMessageHandler:(id)a0;
+ (id)getParamsForPitayaWithBusinessKey:(id)a0 bizKey:(id)a1;


@end
