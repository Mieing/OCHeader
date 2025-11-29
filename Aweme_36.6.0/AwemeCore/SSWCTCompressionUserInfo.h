@interface SSWCTCompressionUserInfo : SSWCTCompressionBaseInfo {
    void *m_userInfo;
}

- (void)addZSTDNormalCompressProperty:(const void *)a0;
- (void)addZSTDDictCompressProperty:(const void *)a0 withDictId:(unsigned char)a1;
- (void)addZSTDDictCompressProperty:(const void *)a0 withMatchProperty:(const void *)a1 andMatchDicts:(id)a2;
- (void)enableReplaceCompression;
- (id)initWithUserInfo:(void *)a0;

@end
