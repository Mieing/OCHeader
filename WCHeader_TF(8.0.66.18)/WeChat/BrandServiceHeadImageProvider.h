@class NSMutableDictionary;

@interface BrandServiceHeadImageProvider : NSObject <IContactMgrExt> {
    NSMutableDictionary *m_headImageCache;
}

- (void)onModifyContact:(id)a0;
- (void)onModifyContactHeadImage:(id)a0;
- (void)onMemoryWarnning;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
