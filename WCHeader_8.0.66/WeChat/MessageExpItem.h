@class NSString;

@interface MessageExpItem : MMObject <NSCopying>

@property (retain, nonatomic) NSString *nsExpIdStr;
@property (nonatomic) BOOL bNeedUpdateTitle;
@property (retain, nonatomic) NSString *nsAppMsgTitle;
@property (nonatomic) BOOL bNeedUpdateDesc;
@property (retain, nonatomic) NSString *nsAppMsgDesc;
@property (nonatomic) BOOL bAppMsgDefaultThumb;
@property (nonatomic) BOOL bNeedHiddenAppTail;
@property (nonatomic) unsigned int uiImageDownloadControlType;
@property (nonatomic) unsigned int uiSightDownloadControlType;

+ (id)genExpXMLFromMessageWrap:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)isExpValid;
- (void).cxx_destruct;

@end
