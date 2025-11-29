@class NSString;

@interface AmoebaMMKV : NSObject <AmoebaMMKVProtocol>

@property (retain, nonatomic) NSString *mapId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMMKV:(id)a0;
+ (id)getUserMMKV:(id)a0;

- (BOOL)setString:(id)a0 forKey:(id)a1;
- (id)getStringForKey:(id)a0 defaultValue:(id)a1;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)getBoolForKey:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)setInt64:(long long)a0 forKey:(id)a1;
- (long long)getInt64ForKey:(id)a0 defaultValue:(long long)a1;
- (void)removeValueForKey:(id)a0;
- (void).cxx_destruct;

@end
