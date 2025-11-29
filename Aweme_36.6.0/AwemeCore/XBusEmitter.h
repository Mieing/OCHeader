@interface XBusEmitter : NSObject {
    struct Emitter { struct EmitterImpl *x0; } *m_pEmitter;
}

- (void)emit:(id)a0 data:(id)a1 callback:(id /* block */)a2 userInfo:(void *)a3;
- (id)emitSync:(id)a0 data:(id)a1;
- (unsigned long long)bindInstance;
- (unsigned long long)bindInstanceWithInstanceId:(unsigned long long)a0;
- (BOOL)isRemoteService;
- (BOOL)isSyncService;
- (BOOL)isSyncMethod:(unsigned long long)a0;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (void)cancelAll;

@end
