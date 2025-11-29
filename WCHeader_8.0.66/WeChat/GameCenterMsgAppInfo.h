@class NSString;

@interface GameCenterMsgAppInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *entranceText;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *downloadUrl;

+ (id)parseFromXml:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void).cxx_destruct;

@end
