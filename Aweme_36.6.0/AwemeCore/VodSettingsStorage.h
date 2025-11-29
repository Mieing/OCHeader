@class NSString, NSMutableDictionary, NSLock, NSUserDefaults;

@interface VodSettingsStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *settingsInfo;
@property (nonatomic) long long loadState;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSUserDefaults *localCache;

- (void)removeAllCache;
- (id)getNumber:(id)a0 dValue:(id)a1;
- (id)getString:(id)a0 dValue:(id)a1;
- (id)getDict:(id)a0 dValue:(id)a1;
- (id)getArray:(id)a0 dValue:(id)a1;
- (void)setString:(id)a0 value:(id)a1;
- (void)setNumber:(id)a0 value:(id)a1;
- (void)setDict:(id)a0 value:(id)a1;
- (void)storeInfo:(id)a0 incrementally:(BOOL)a1;
- (void)tryToLoadLocal;
- (id)_storeInfokey;
- (void)_putObject:(id)a0 value:(id)a1;
- (id)_getObjetc:(id)a0 dValue:(id)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(long long)a1;
- (id)getInfo;

@end
