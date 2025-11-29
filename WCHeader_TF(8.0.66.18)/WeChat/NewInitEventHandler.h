@class NSData, NSObject;
@protocol OS_dispatch_queue;

@interface NewInitEventHandler : ProtobufEventHandler {
    NSData *m_curKey;
    NSData *m_maxKey;
    NSObject<OS_dispatch_queue> *m_worker;
}

- (id)init;
- (void)dealloc;
- (void)OnProtocolStart:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)saveKeyBuffer:(unsigned int)a0 withSelector:(unsigned int)a1 withCurKey:(id)a2 withMaxKey:(id)a3;
- (void).cxx_destruct;

@end
