@class NSString, NSMutableDictionary;

@interface AWEAntiAddictStrategyData : MTLModel <MTLJSONSerializing>

@property (retain) NSMutableDictionary *privateData;
@property (copy) NSString *savedKey;
@property BOOL disableSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getStrategyDataDic;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
