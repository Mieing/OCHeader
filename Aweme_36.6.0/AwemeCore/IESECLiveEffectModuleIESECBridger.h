@class NSString;
@protocol IESLiveEffectModule;

@interface IESECLiveEffectModuleIESECBridger : NSObject <IESECLiveEffectModule>

@property (retain, nonatomic) id<IESLiveEffectModule> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

@end
