@class NSString, NSMutableDictionary;

@interface IESECRelationContextStore : IESECContext <IESECDIContext>

@property (retain, nonatomic) NSMutableDictionary *itemDicts;
@property (retain, nonatomic) NSMutableDictionary *itemDicts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextItemForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 expiredTime:(double)a2;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
