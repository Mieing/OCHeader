@class NSMutableArray;

@interface OplogEventHandler : ProtobufEventHandler {
    NSMutableArray *m_arrOplogs;
}

- (void)OnProtocolStart:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolConnectFail:(id)a0;
- (void).cxx_destruct;

@end
