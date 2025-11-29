@class NSString, EmoticonRecommendTabConfig, EmoticonMsgDeleteReport;

@interface EmoticonTabRecommendMgr : MMUserService <IExptServiceExt, MMServiceProtocol, IMsgExt>

@property (retain, nonatomic) EmoticonMsgDeleteReport *emoticonMsgDeleteReport;
@property (retain, nonatomic) EmoticonRecommendTabConfig *emoticonRecommendTabConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getTabRecommendData;
- (void)removeItemWithProductId:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (id)getStringWithSuperNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withKey:(const char *)a1;
- (void)parseRecommendTabConfig:(id)a0;
- (BOOL)enableEmoticonRecommendTab;
- (BOOL)enableEmoticonRecommendLocalModel;
- (BOOL)enableEmoticonRecommendPlayGif;
- (BOOL)enableEmoticonCustomPlayGif;
- (void)onExptItemListChange;
- (void)testXml;
- (void).cxx_destruct;

@end
