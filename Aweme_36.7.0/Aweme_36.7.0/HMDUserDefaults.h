@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDUserDefaults : NSObject {
    NSDictionary *_historyDic;
}

@property (readonly) struct __CFString { } *appNameRef;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialSetQueue;

+ (id)standardUserDefaults;

- (id)objectForKeyCompatibleWithHistoryThreadSafe:(id)a0;
- (id)objectForKeyCompatibleWithHistory:(id)a0;
- (void)syncSetObject:(id)a0 forKey:(id)a1;
- (id)objectForKeyThreadSafe:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)sharedHistory;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithSuiteName:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictForKey:(id)a0;

@end
