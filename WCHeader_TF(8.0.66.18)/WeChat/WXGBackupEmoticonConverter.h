@class NSMutableDictionary;

@interface WXGBackupEmoticonConverter : NSObject {
    NSMutableDictionary *m_md5ConverterDic;
}

- (id)init;
- (void)initMd5ConverterDic;
- (void)convertEmoticonMessageWrap:(id)a0;
- (void).cxx_destruct;

@end
