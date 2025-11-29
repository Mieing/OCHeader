@class NSString, NSMutableArray, TIMXSDKInstance;
@protocol TIMXKVStorageProtocol, TIMXCurrentUserCredentialProtocol;

@interface TIMXPullerMessageKVUtility : NSObject <TIMXPullerMessageKVUtilityProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> userCredential;
@property (copy, nonatomic) NSString *kvVersionKey;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *kvVersionRangeKey;
@property (retain, nonatomic) NSMutableArray *pullVersionRangeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)versionKeyForInbox:(int)a0 type:(long long)a1;
+ (id)versionRangeKeyForInbox:(int)a0 type:(long long)a1;
+ (id)versionKeyForInbox:(int)a0;
+ (id)versionRangeKeyForInbox:(int)a0;

- (void)migrateOldPuller;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2;
- (void)setUpKV;
- (BOOL)hasVersionWithType:(long long)a0;
- (void)migrateOldVersion;
- (void)migrateVersionForSec;
- (BOOL)isVersionValid;
- (void)updateCurrentVersionFromPullVersionRangeWithLogId:(id)a0;
- (void)updateCurrentVersionFromPullVersionRange;
- (void)mergePullVersionRangeWithMergeLeft:(long long)a0 mergeRight:(long long)a1 logId:(id)a2;
- (void)writeRangeList:(id)a0;
- (void)writeVersion:(long long)a0 withContext:(id)a1;
- (void)writeVersion:(long long)a0;
- (void)writeCurrentRangeList;
- (id)readRangeList;
- (id)logPrintRange:(id)a0;
- (void).cxx_destruct;
- (long long)readVersion;

@end
