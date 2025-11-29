@class BDPCommon, NSMapTable, NSRecursiveLock;

@interface BDPCommonManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMapTable *commons;
@property (retain, nonatomic) NSMapTable *launchInfos;
@property (readonly, nonatomic) BDPCommon *foregroundAppCommon;
@property (nonatomic) long long gameWebViewCount;
@property (nonatomic) long long gameJSCCount;
@property (nonatomic) long long appWebViewCount;
@property (nonatomic) long long appJSCCount;

+ (id)sharedManager;

- (id)getCommonWithUniqueID:(id)a0;
- (BOOL)hasAppInTheForeground;
- (void)addCommon:(id)a0 uniqueID:(id)a1;
- (void)removeCommonWithUniqueID:(id)a0;
- (BOOL)hasLaunchInfosWithAppID:(id)a0;
- (void)updateSlardarInfoValue:(id)a0 forKey:(id)a1;
- (void)addLaunchInfo:(id)a0 uniqueID:(id)a1;
- (void)removeLaunchInfoWithUniqueID:(id)a0;
- (id)getLaunchInfoWithUniqueID:(id)a0;
- (void)removeAllCommons;
- (BOOL)hasCommonWithAppID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
