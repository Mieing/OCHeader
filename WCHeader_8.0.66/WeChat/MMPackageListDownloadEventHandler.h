@interface MMPackageListDownloadEventHandler : ProtobufEventHandler {
    unsigned int m_tryCount;
}

- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;

@end
