@class NSString;

@interface IESLiveConsumeDiamondLevelServiceIMP : IESLiveGeneralBaseService <IESLiveConsumeDiamondLevelService>

@property (nonatomic) long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (BOOL)shouldUpdateConsumeDiamondLevel;
- (void)updateConsumeDiamondLevel;

@end
