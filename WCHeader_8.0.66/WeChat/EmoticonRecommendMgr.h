@class EmoticonServerTip, NSString;

@interface EmoticonRecommendMgr : MMUserService <EmoticonDescMgrExt, MMServiceProtocol, IMsgExt, EmoticonStoreItemExt> {
    NSString *m_lastEmotionStoreNodePid;
    NSString *m_lastEmotionStoreContent;
}

@property (retain, nonatomic) EmoticonServerTip *m_serverTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)hasPersonalNew;
- (BOOL)clearPersonalNew;
- (BOOL)hasDesignerEmojiEntranceNew;
- (void)clearDesignerEmojiEntranceNew;
- (BOOL)HasNew;
- (BOOL)isFreeTip;
- (id)tipString;
- (id)iconUrl;
- (BOOL)isTipsExpired;
- (void)resetLastUpdateTime;
- (BOOL)lastUpdateTimeNoneZero;
- (BOOL)ClearNew;
- (BOOL)hasBoardViewPlusNew;
- (void)setEmoticonStoreTipsFromNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)onServerTipsUpdated;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onGetEmoticonClickFlag:(unsigned int)a0 downloadFlag:(unsigned int)a1 pid:(id)a2;
- (void).cxx_destruct;

@end
