@class NSString;

@interface WCAdStatePublishInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *videoMd5;
@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *customIconDescription;
@property (retain, nonatomic) NSString *sourceFooterData;
@property (retain, nonatomic) NSString *sourceVerifyInfo;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *emoticonUrl;
@property (retain, nonatomic) NSString *emoticonMd5;
@property (nonatomic) long long expiredTime;
@property (retain, nonatomic) NSString *expiredToast;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
