@class NSString;

@interface IESECLiveSchemaFactory : NSObject <IESECLiveSchemaInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveSchemaWithBase:(id)a0 query:(id)a1 openSchema:(BOOL)a2;
+ (id)p_updateEcomLiveParams:(id)a0 byParams:(id)a1;
+ (id)validEcomLiveParamsStr:(id)a0 logExtra:(id)a1;


@end
