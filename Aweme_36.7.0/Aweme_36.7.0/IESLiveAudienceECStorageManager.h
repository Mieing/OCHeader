@class NSMutableDictionary;

@interface IESLiveAudienceECStorageManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)stringValueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
