@class NSString, RsaCertInfo, NSRecursiveLock;

@interface RsaCertMgr : MMUserService <MMServiceProtocol> {
    NSRecursiveLock *m_oLock;
    RsaCertInfo *m_oRsaCertInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetPathOfRsaCertInfo;
+ (id)GetPathOfRsaCertInfoVerify;
+ (id)GetInfoStringMd5For:(id)a0;

- (id)init;
- (void)dealloc;
- (void)LoadRsaCertInfo;
- (void)SaveRsaCertInfoVerify;
- (void)SaveRsaCertInfo;
- (id)GetBaseRsaCertInfo;
- (id)GetAuthCertInfo;
- (id)GetKVCommCertInfo;
- (id)GetMutableRsaCertInfo;
- (void).cxx_destruct;

@end
