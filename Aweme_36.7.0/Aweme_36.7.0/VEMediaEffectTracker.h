@class NSMutableDictionary;

@interface VEMediaEffectTracker : IESMMObject

@property (retain, nonatomic) NSMutableDictionary *trackDic;

+ (id)trackerLock;
+ (void)setTrackerInstance:(id)a0;
+ (void)removeTracker;
+ (id)sharedInstance;

- (id)getMediaEffectDic;
- (void)setValue:(id)a0 withKey:(id)a1;
- (void)p_setVEEffectVersion;
- (void)printMediaEffectDic;
- (void)removeKey:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;

@end
