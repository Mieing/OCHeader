@class NSMutableDictionary, NSRecursiveLock;

@interface SafeMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *m_dic;
@property (retain, nonatomic) NSRecursiveLock *m_lock;

- (id)init;
- (void)dictionaryReset;
- (void)dictionarySetObject:(id)a0 key:(id)a1;
- (id)dictionaryGetObjectForKey:(id)a0;
- (void)dictionaryRemoveObjectForKey:(id)a0;
- (id)dictionaryAllKeys;
- (void).cxx_destruct;

@end
