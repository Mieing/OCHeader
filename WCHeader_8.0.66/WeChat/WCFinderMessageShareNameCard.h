@class NSString;

@interface WCFinderMessageShareNameCard : MMObject <NSCopying>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *authJob;
@property (copy, nonatomic) NSString *authIcon;
@property (copy, nonatomic) NSString *authIconUrl;
@property (copy, nonatomic) NSString *lastGMsgID;
@property (copy, nonatomic) NSString *ecSource;
@property (nonatomic) unsigned long long contentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (BOOL)isMemberShipFeed;
- (void).cxx_destruct;

@end
