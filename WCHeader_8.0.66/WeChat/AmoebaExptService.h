@interface AmoebaExptService : NSObject

+ (id)shareInstance;

- (id)getStrExpt:(id)a0 withDef:(id)a1;
- (long long)getIntExpt:(id)a0 withDef:(long long)a1;
- (BOOL)getBoolExpt:(id)a0 withDef:(BOOL)a1;

@end
