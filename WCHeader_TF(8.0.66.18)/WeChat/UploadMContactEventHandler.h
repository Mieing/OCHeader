@class NSString, NSMutableArray;

@interface UploadMContactEventHandler : ProtobufEventHandler {
    NSMutableArray *m_arrMobileList;
    NSMutableArray *m_arrEmailList;
    NSMutableArray *m_curUploadMobile;
    NSMutableArray *m_curUploadEmail;
    NSString *m_nsMobile;
    unsigned int m_uiUploadCount;
}

- (void)OnProtocolStart:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void).cxx_destruct;

@end
