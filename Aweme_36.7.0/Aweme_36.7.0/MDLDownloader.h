@interface MDLDownloader : NSObject {
    int _bid;
    void *_handle;
    struct AVMDLManagerV2 { void /* function */ **x0; void *x1; } *_mdlMgr;
}

- (id)initWithBid:(long long)a0 callback:(id)a1 mdlManager:(void *)a2;
- (id)createTaskWithBid:(long long)a0 url:(id)a1 headers:(id)a2 options:(id)a3 extInfo:(id)a4;

@end
