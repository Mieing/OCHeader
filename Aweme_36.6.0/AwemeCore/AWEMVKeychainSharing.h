@class NSString;

@interface AWEMVKeychainSharing : NSObject

@property (copy, nonatomic) NSString *accessGroup;

- (BOOL)deleteItemForKey:(id)a0;
- (void)saveDictionary:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)getDictionaryForKey:(id)a0 completion:(id /* block */)a1;
- (void)deleteDictionaryForKey:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithAccessGroup:(id)a0;

@end
