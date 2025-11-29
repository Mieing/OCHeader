@class NSString, NSArray, WCFinderJumpInfo;

@interface ServiceNotifyMessageItem : NSObject

@property (retain, nonatomic) NSString *previewTitle;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSString *nick;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *tail;
@property (retain, nonatomic) NSString *xml;
@property (retain, nonatomic) NSArray *displayList;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)parseWithXmlReader:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 content:(id)a1;
- (void).cxx_destruct;

@end
