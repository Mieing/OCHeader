@class NSString, NSMutableDictionary, WCFinderRedDotThreadSafeDictionary;

@interface WCFinderRedDotDictionaryHelper : NSObject <PBCoding>

@property (nonatomic) BOOL useGCDSwitch;
@property (retain, nonatomic) WCFinderRedDotThreadSafeDictionary *gcdDic;
@property (retain, nonatomic) NSMutableDictionary *dic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGCDSwitch:(BOOL)a0 queueName:(id)a1;
- (id)currentDic;
- (void)containerReset;
- (void)containerRemoveAllObjects;
- (void)containerSetObject:(id)a0 forKey:(id)a1;
- (void)containerRemoveObjectForKey:(id)a0;
- (void)containerRemoveObjectsForKeys:(id)a0;
- (id)containerObjectForKey:(id)a0;
- (id)containerMutableCopy;
- (unsigned long long)containerCount;
- (void)containerEnumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)containerAllValues;
- (void).cxx_destruct;

@end
