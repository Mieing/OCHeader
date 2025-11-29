@class NSMutableDictionary;

@interface ContactTagCacheMgr : MMObject {
    NSMutableDictionary *m_dicCache;
    BOOL _bIsAlreadyBuildCacheFromContacts;
}

- (id)init;
- (void)checkLoadCacheDataFromContacts;
- (void)ModCacheKey:(id)a0 Value:(id)a1;
- (void)DelCacheKey:(id)a0;
- (id)GetCacheValue:(id)a0;
- (id)GetLabelIDToUserNameList;
- (void).cxx_destruct;

@end
