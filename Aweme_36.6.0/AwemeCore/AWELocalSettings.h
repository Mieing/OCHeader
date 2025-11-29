@class NSString;

@interface AWELocalSettings : AWEBaseSettings <AWEAppSettingSetterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)setIntValue:(long long)a0 forKey:(id)a1;
- (void)setDoubleValue:(double)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBoolValue:(BOOL)a0 forKey:(id)a1;

@end
