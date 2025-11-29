@class NSString;

@interface GameCenterGroupMsg : GameCenterOldBaseMsg

@property (retain, nonatomic) NSString *topicTitle;
@property (retain, nonatomic) NSString *reply;
@property (retain, nonatomic) NSString *commentToReply;
@property (retain, nonatomic) NSString *topicUrl;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *groupUrl;
@property (nonatomic) int subType;

- (id)initWithXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)getMsgCenterContent;
- (void).cxx_destruct;

@end
