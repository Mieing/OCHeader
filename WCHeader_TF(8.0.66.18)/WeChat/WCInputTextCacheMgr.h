@class NSMutableArray, NSMutableDictionary;

@interface WCInputTextCacheMgr : NSObject {
    NSMutableArray *_arrCacheText;
    NSMutableDictionary *_dicRedEnvelopesReceiveInfo;
    BOOL m_bNeedCacheRecieveInfo;
    NSMutableDictionary *pasteLengthDic;
    NSMutableDictionary *extBeanDic;
}

- (id)init;
- (void)saveCacheText;
- (void)dealloc;
- (id)cacheTextKey:(id)a0 refCommentItem:(id)a1;
- (void)uncacheText:(id)a0 refCommentItem:(id)a1;
- (void)cacheText:(id)a0 image:(id)a1 emoji:(id)a2 refDataItem:(id)a3 refCommentItem:(id)a4 PasteLogic:(id)a5 withExtBean:(id)a6;
- (id)getCacheText:(id)a0 refCommentItem:(id)a1 PasteLogic:(id)a2 withExtBean:(id)a3;
- (void)saveRedEnvelopesReceiveInfo;
- (void)cacheRewardStatus:(id)a0;
- (void)cacheFreeStatus:(id)a0;
- (id)getRedEnvelopesInfoByDataItem:(id)a0;
- (void)saveAllCache;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void).cxx_destruct;

@end
