@class NSString;

@interface FBSDKKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *accessGroup;

- (id)initWithService:(id)a0 accessGroup:(id)a1;
- (BOOL)setDictionary:(id)a0 forKey:(id)a1 accessibility:(void *)a2;
- (id)dictionaryForKey:(id)a0;
- (BOOL)setString:(id)a0 forKey:(id)a1 accessibility:(void *)a2;
- (id)stringForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1 accessibility:(void *)a2;
- (id)dataForKey:(id)a0;
- (id)queryForKey:(id)a0;
- (void).cxx_destruct;

@end
