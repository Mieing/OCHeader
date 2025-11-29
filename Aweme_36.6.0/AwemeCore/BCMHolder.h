@class NSString, NSMutableDictionary;

@interface BCMHolder : NSObject <NSCopying> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *unitStorage;
@property (retain, nonatomic) NSMutableDictionary *pageStorage;
@property (retain, nonatomic) NSMutableDictionary *tempUnitStorage;
@property (copy, nonatomic) NSString *pageId;
@property (copy, nonatomic) NSString *btm;

+ (void)merge2LevelForDictionary:(id)a0 fromDictionary:(id)a1;
+ (void)passDataFromPreviousHolder:(id)a0 toHolder:(id)a1 needClear:(BOOL)a2;

- (void)cleanTempUnitStorage;
- (void)clearUnitParams;
- (void)setStorage:(id)a0 forKey:(id)a1 storageType:(unsigned long long)a2;
- (id)getStorageForKey:(id)a0 storageType:(unsigned long long)a1;
- (id)contentForKeys:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
