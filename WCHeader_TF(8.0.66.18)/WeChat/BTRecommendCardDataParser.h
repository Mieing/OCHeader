@interface BTRecommendCardDataParser : NSObject

+ (id)parseRecommendXmlContent:(id)a0 recReason:(id)a1 resortBuffer:(id)a2;
+ (id)parseRecommendXmlContent:(id)a0 msgSvrId:(unsigned long long)a1 createTime:(unsigned int)a2 recReason:(id)a3 resortBuffer:(id)a4;
+ (void)parseBizAccountRecommendFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 recCardWrapper:(id)a1 createTime:(unsigned int)a2;
+ (BOOL)parseBizRecommendExptFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 recCardWrapper:(id)a1 createTime:(unsigned int)a2;
+ (void)parseStyle0RecCardFromNotifyNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 currentRecCardWrapper:(id)a1;
+ (void)parseReaderStyleRecCardFromNotifyNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 currentRecCardWrapper:(id)a1;
+ (id)parseBizInfoArrFromNotifyNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)parseAppMsgArrFromBizAccountNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (void)parseFinderCardFromNotifyNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 currentRecCardWrapper:(id)a1;
+ (id)parseWrapMsgToRecommendSectionData:(id)a0;
+ (id)parseRecCardWrapperToRecommendSectionData:(id)a0;
+ (void)parseStyle0RecommendSectionDataWithRecCardWrapper:(id)a0 currMsgData:(id)a1;
+ (void)parseRecommendAriticleSectionDataWithRecCardWrapper:(id)a0 currMsgData:(id)a1;
+ (id)getAccountDataArrFromBizInfoArr:(id)a0;
+ (id)getAppMsgArrFromPbToModel:(id)a0;
+ (void)parseFinderRecommendSectionDataWithRecCardWrapper:(id)a0 currMsgData:(id)a1;

@end
