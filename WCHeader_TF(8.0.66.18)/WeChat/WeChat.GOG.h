@interface WeChat.GOG : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ _main;
}

- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)reportWithTask:(id)a0 response1:(id)a1;
- (void)reportWithMsg:(id)a0 md5:(id)a1 mediaid:(unsigned long long)a2 fileid:(id)a3 filekey:(id)a4;
- (void)reportWithTask:(id)a0 response2:(id)a1;
- (void)reportWithMsg:(id)a0 video:(id)a1;
- (void)reportWithTask:(id)a0;
- (void)cacheWithVideo:(id)a0 createTime:(long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
