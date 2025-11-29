@class NSString, NSMutableSet, NSMutableArray;

@interface MMEasterEggMgr : MMUserService <MMEmoticonResExt, MMServiceProtocol> {
    BOOL m_isShowEgg;
    unsigned int m_uiEasterEggLastUpdateTime;
    NSMutableArray *m_arrEgg;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *disabledAppIdSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initEggWithConfigDirPath:(id)a0;
- (void)onEmoticonResUpdateForSubType:(unsigned int)a0 dirPath:(id)a1;
- (void)onEmoticonResDeleteForSubType:(unsigned int)a0;
- (id)parseTopAnimationFromTopAnimNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 dirPath:(id)a1;
- (id)parseEggAnimationFromAnimTypeNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 dirPath:(id)a1 clientEggVersion:(long long)a2 ignoreImageName:(BOOL)a3;
- (void)encodeDisabledAppIdList;
- (void)decodeDisabledAppIdList;
- (id)disabledAppIdListKey;
- (id)init;
- (BOOL)isShowEasterEgg;
- (void)setupEasterEggAttributesToMessage:(id)a0;
- (id)easterEggWithMessage:(id)a0;
- (void)disableEasterEggWithAppId:(id)a0;
- (void).cxx_destruct;

@end
