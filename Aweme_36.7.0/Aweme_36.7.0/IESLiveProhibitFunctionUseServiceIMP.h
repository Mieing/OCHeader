@class NSString, NSMutableDictionary;

@interface IESLiveProhibitFunctionUseServiceIMP : IESLiveGeneralBaseService <IESLiveProhibitFunctionUseService>

@property (retain, nonatomic) NSMutableDictionary *prohibitBlockDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)registerProhibitHandler:(id)a0 completion:(id /* block */)a1;
- (BOOL)needProhibitFunctionUse:(id)a0;
- (void).cxx_destruct;

@end
