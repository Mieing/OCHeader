@interface MDLDownloadTask : NSObject {
    long long _bid;
    struct AVMDLManagerV2 { void /* function */ **x0; void *x1; } *_mdlMgr;
    void *_dlHandler;
}

- (void)setBid:(long long)a0;
- (long long)asyncStart:(id)a0;
- (long long)read:(long long)a0 size:(long long)a1 buffer:(void *)a2 timeout:(long long)a3;
- (long long)setMDLValue:(id)a0 value:(id)a1;
- (id)getMDLValue:(id)a0;
- (void)setMdlMgr:(void *)a0;
- (void)setHandler:(void *)a0;
- (long long)stop:(long long)a0;

@end
