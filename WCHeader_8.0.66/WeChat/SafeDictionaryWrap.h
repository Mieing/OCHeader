@class NSDictionary, NSRecursiveLock;

@interface SafeDictionaryWrap : MMObject {
    NSRecursiveLock *_lock;
    NSDictionary *_dic;
}

- (id)init;
- (void)safeSetDictionrary:(id)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;

@end
