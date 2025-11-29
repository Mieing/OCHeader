@class NSString;

@interface SecurityGuardOpenDynamicDataStore : NSObject <ISecurityGuardOpenDynamicDataStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)putString:(id)a0 forKey:(id)a1;
- (void)removeStringForKey:(id)a0;
- (int)putData:(id)a0 forKey:(id)a1;
- (long long)getInteger:(id)a0;
- (int)putInteger:(long long)a0 forKey:(id)a1;
- (void)removeIntegerForKey:(id)a0;
- (float)getFloat:(id)a0;
- (int)putFloat:(float)a0 forKey:(id)a1;
- (double)getDouble:(id)a0;
- (int)putDouble:(double)a0 forKey:(id)a1;
- (int)putBool:(BOOL)a0 forKey:(id)a1;
- (id)getStringDDp:(id)a0;
- (int)putStringDDp:(id)a0 forKey:(id)a1;
- (void)removeStringForKeyDDp:(id)a0;
- (id)getDataDDp:(id)a0;
- (int)putDataDDp:(id)a0 forKey:(id)a1;
- (void)removeDataForKeyDDp:(id)a0;
- (id)getStringDDpEx:(id)a0 flag:(int)a1;
- (BOOL)putStringDDpEx:(id)a0 forKey:(id)a1 flag:(int)a2;
- (void)removeStringDDpEx:(id)a0 flag:(int)a1;
- (id)getDataDDpEx:(id)a0 flag:(int)a1;
- (BOOL)putDataDDpEx:(id)a0 forKey:(id)a1 flag:(int)a2;
- (void)removeDataDDpEx:(id)a0 flag:(int)a1;
- (Class)getMetaClass;
- (int)putValue:(id)a0 withKey:(id)a1 type:(id)a2 isDDp:(unsigned char)a3;
- (id)getValueWithKey:(id)a0 type:(id)a1 isDDp:(unsigned char)a2;
- (void)removeValueWithKey:(id)a0 type:(id)a1 isDDp:(unsigned char)a2;
- (id)DDpExOperation:(int)a0 forKey:(id)a1 needProcessData:(id)a2 flag:(int)a3;
- (BOOL)getBool:(id)a0;
- (void)removeDataForKey:(id)a0;
- (void)removeBoolForKey:(id)a0;
- (void)removeFloatForKey:(id)a0;
- (void)removeDoubleForKey:(id)a0;
- (id)getData:(id)a0;
- (id)getString:(id)a0;

@end
