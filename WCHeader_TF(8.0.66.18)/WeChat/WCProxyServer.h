@class NSMutableArray;

@interface WCProxyServer : GCDWebServer {
    NSMutableArray *_arrGuests;
}

+ (id)shareInstance;

- (void)dealloc;
- (id)init;
- (BOOL)wx_tryStart:(id)a0;
- (void)wx_tryStop:(id)a0;
- (BOOL)start;
- (void)stop;
- (id)handleHevcRequest:(id)a0;
- (id)sendSynchronousRequest:(id)a0 returningResponse:(id *)a1 error:(id *)a2;
- (void)setResponseHeaderFor:(id)a0 from:(id)a1;
- (int)convertPicType:(id)a0;
- (void).cxx_destruct;

@end
