@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray;

@interface ChatRoomData : NSObject {
    NSMutableDictionary *m_dicData;
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *inviterTraceTemplateList;
@property (nonatomic) unsigned int maxMemberCount;
@property (nonatomic) unsigned int chatRoomVersion;
@property (nonatomic) unsigned int localMemberVersion;
@property (nonatomic) BOOL isSimplify;
@property (retain, nonatomic) NSString *joinChatRoomWord;

+ (id)parseInviterName:(id)a0;
+ (id)parseInviterTraceTemplate:(id)a0;
+ (id)parseJoinChatRoomWord:(id)a0;

- (id)init;
- (id)initWithNewChatRoomData:(id)a0;
- (id)initWithNewOpenIMChatRoomData:(id)a0;
- (void)merge:(id)a0;
- (void)mergeOpenIMData:(id)a0;
- (void)mergeOldDetail:(id)a0;
- (id)getDataForUserName:(id)a0 key:(id)a1;
- (void)setDataForUserName:(id)a0 key:(id)a1 value:(id)a2;
- (void)setInviterNameForUserName:(id)a0 value:(id)a1;
- (void)setInviterTraceTemplateForUserName:(id)a0 value:(id)a1;
- (void)parseData:(id)a0;
- (id)getDataXml;
- (id)getDataDescription;
- (void)updateChatRoomData:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)setDislayName:(id)a0 forUserName:(id)a1;
- (id)getDislayNameForUserName:(id)a0;
- (id)getUsernameForDisplayName:(id)a0;
- (id)getAllDisplayName;
- (id)getInviterNameForUsername:(id)a0;
- (id)getInviterTraceTemplateForUsername:(id)a0;
- (void)setShowDislayName:(BOOL)a0;
- (BOOL)isShowDislayName;
- (void)setClosePushAtMe:(BOOL)a0;
- (BOOL)isClosePushAtMe;
- (void)setClosePushAtAll:(BOOL)a0;
- (BOOL)isClosePushAtAll;
- (void)setClosePushGroupNotice:(BOOL)a0;
- (BOOL)isClosePushGroupNotice;
- (unsigned int)getChatRoomMemberFlag;
- (unsigned int)getXmlNodeIntValue:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 forName:(const char *)a1;
- (void)updateJoinChatRoomWord:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)updateInviterTraceTemplateList:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)updateDicData:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void).cxx_destruct;

@end
