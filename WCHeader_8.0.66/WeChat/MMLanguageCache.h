@class NSRecursiveLock, NSString, NSMutableDictionary, NSDate;

@interface MMLanguageCache : NSObject <PBCoding> {
    BOOL m_haveSave;
    unsigned int m_currentCount;
    NSRecursiveLock *m_dictLock;
}

@property (copy, nonatomic) NSString *curSystemLanguage;
@property (retain, nonatomic) NSMutableDictionary *cacheLanStringDict;
@property (copy, nonatomic) NSString *appUUID;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSDate *updateModifeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_curSystemLanguage;
+ (void)PBArrayAdd_cacheLanStringDict;
+ (void)PBArrayAdd_appUUID;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_updateModifeTime;
+ (void)initialize;
+ (id)getLanguageCache;

- (id)getPBPropertyTable;
- (id)init;
- (void)resetCurLan:(id)a0 withUpdateBundlePath:(id)a1;
- (void)resetString:(id)a0 for:(id)a1;
- (id)getStringForStringID:(id)a0;
- (void)save;
- (void).cxx_destruct;

@end
