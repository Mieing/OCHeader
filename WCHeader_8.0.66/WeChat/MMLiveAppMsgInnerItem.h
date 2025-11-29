@class MMGroupLiveInfoItem;

@interface MMLiveAppMsgInnerItem : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) BOOL useDefaultLiveName;
@property (retain, nonatomic) MMGroupLiveInfoItem *liveInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
