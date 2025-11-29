@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface WXGRoamRecoverInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSRecursiveLock *markLock;
@property (retain, nonatomic) NSMutableDictionary *recoverMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_recoverMap;
+ (void)initialize;
+ (id)loadRecoverInfoFromFile;
+ (BOOL)saveRecoverInfo:(id)a0;

- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)getRecoverTimeForKey:(id)a0;
- (void)saveRecoverTime:(unsigned long long)a0 withKey:(id)a1;
- (void).cxx_destruct;

@end
