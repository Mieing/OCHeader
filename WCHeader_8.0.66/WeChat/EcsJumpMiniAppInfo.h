@class NSString;

@interface EcsJumpMiniAppInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appUsername;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned int versionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
