@class NSString, NSMutableDictionary;

@interface AWEIMLightInteractionDebuplicationManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *lastSendLITimeDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enabledDeduplicate;
+ (double)p_deduplicationTimeInterval;
+ (void)removeSurplusItemsIfNeedOfDict:(id)a0 withMaxCount:(long long)a1;
+ (id)p_getCurrentUserCacheKey;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)markDidSendLIToUserWithUid:(id)a0;
- (void)p_readLastSendLITimeDictFromDisk;
- (BOOL)shouldFilterUserWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
