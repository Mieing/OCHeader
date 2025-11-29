@interface AWENearbyPullMsgManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)trackEventOfByteSyncWithErrMsg:(id)a0 rcvdType:(long long)a1 linkType:(long long)a2 noticeType:(long long)a3 bizType:(long long)a4;
- (BOOL)hadDuplicateWithMsg:(id)a0;
- (id)cacheDictWithLogid:(id)a0 noticeType:(long long)a1 bizId:(long long)a2;
- (id)removeCacheMessageWithArray:(id)a0;
- (void)tryToCacheMsgWithArray:(id)a0;
- (BOOL)duplicateWithMsg:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
