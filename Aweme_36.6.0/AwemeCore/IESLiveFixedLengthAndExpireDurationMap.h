@class IESLiveThreadSafeDictionary, NSString;

@interface IESLiveFixedLengthAndExpireDurationMap : NSObject

@property (retain, nonatomic) IESLiveThreadSafeDictionary *dict;
@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long expiredDuration;
@property (retain, nonatomic) NSString *identifier;

- (id)initWithCapacity:(unsigned long long)a0 expireDuration:(unsigned long long)a1 identifier:(id)a2;
- (void)removeKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)update;
- (id)allKeys;
- (void)removeKeys:(id)a0;
- (void)saveData;

@end
