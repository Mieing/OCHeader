@class NSDictionary, NSMutableDictionary, IESECSKUUplinkSkipTriggersInfo;

@interface IESECSKUUplinkDataHelper : NSObject

@property (retain, nonatomic) IESECSKUUplinkSkipTriggersInfo *triggersInfo;
@property (retain, nonatomic) NSMutableDictionary *operationStatusMap;
@property (nonatomic) unsigned long long curVersion;
@property (nonatomic) unsigned long long instanceVersion;
@property (retain, nonatomic) NSDictionary *instanceResp;

- (id)p_findTriggerInfosWithTrigger:(id)a0 fromTriggerInfoArr:(id)a1;
- (void)updateModule:(id)a0 inOperation:(BOOL)a1;
- (id)getCurInOperationModuleStatus;
- (BOOL)isTiggerInGlobalSkipTriggerList:(id)a0;
- (BOOL)isTiggerInModuleSkipTriggerList:(id)a0;
- (id)getModuleNameForTrigger:(id)a0;
- (void)updateInstanceVersion:(unsigned long long)a0 instanceResponse:(id)a1 originQueryParams:(id)a2;
- (void)cacheInstanceResponse:(id)a0 originQueryParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
