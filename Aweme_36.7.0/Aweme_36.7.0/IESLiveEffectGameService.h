@class NSString, NSMutableDictionary;

@interface IESLiveEffectGameService : IESLiveGeneralBaseService <IESLiveEffectGameService>

@property (retain, nonatomic) NSMutableDictionary *currentGameStatusDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)updateEffectGameStatus:(id)a0 status:(long long)a1 extra:(id)a2;
- (id)getEffectGameStatus;
- (void).cxx_destruct;

@end
