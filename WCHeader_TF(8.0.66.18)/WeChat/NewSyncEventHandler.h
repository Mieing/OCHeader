@interface NewSyncEventHandler : ProtobufEventHandler {
    unsigned int ct1;
    unsigned long long m_startTime;
}

- (void)OnProtocolStart:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;

@end
