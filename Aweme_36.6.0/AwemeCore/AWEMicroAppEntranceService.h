@class NSString, NSMapTable, NSMutableDictionary;

@interface AWEMicroAppEntranceService : HTSService <AWEMicroAppEntranceService>

@property (retain, nonatomic) NSMapTable *tokenToEntranceMap;
@property (retain, nonatomic) NSMutableDictionary *jsbAutoFixResultList;
@property (retain, nonatomic) NSMutableDictionary *jsbAutoFixConditionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tryToMarkNativeSchema:(id)a0;
+ (id)p_tryToMarkSchema:(id)a0 distributeType:(long long)a1 subType:(id)a2;
+ (id)p_tryToMarkSchema:(id)a0 distributeType:(long long)a1;

- (BOOL)isTimorSchema:(id)a0;
- (BOOL)isEnableEntrance;
- (id)markJsbHybridSchema:(id)a0 APIContext:(id)a1 PageContext:(id)a2;
- (id)markJsbLynxSchema:(id)a0 LynxView:(id)a1;
- (id)markNativeSchema:(id)a0 subType:(id)a1;
- (BOOL)invokeMpSchemaFromScanWithSchema:(id)a0 extra:(id)a1;
- (BOOL)isEnableEntranceForLaunchFrom:(id)a0;
- (id)getEntranceByToken:(id)a0;
- (BOOL)p_isShouldMarkForSchema:(id)a0;
- (id)p_autoFixSchema:(id)a0 distributeType:(long long)a1 pageIdentifier:(id)a2;
- (id)p_getEntranceByToken:(id)a0;
- (void)p_setEntrance:(id)a0 ByToken:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
