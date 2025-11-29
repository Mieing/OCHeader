@class NSString, NSMutableDictionary, NSDate;

@interface AWEAwemeDuplicateFilterManager : NSObject <AWEAwemeDuplicateFilterManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *yesterdayDict;
@property (retain, nonatomic) NSMutableDictionary *todayDict;
@property (retain, nonatomic) NSDate *todayDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)enableFeedDuplicateFilterLog;
- (void)addAwemeID:(id)a0 imprID:(id)a1;
- (BOOL)isDuplicateForLog:(id)a0;
- (id)lastImprIDForLog:(id)a0;
- (id)lastPlayTimeForLog:(id)a0;
- (BOOL)isDuplicateForIMPush:(id)a0;
- (void).cxx_destruct;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDuplicate:(id)a0;
- (id)dateForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
