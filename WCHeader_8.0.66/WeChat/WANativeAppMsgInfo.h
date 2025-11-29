@class NSString;

@interface WANativeAppMsgInfo : MMObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *appNameMultiLanguageKey;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIconUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNearbyNativeAppMsg;
- (BOOL)isValid;
- (id)appDisplayName;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
