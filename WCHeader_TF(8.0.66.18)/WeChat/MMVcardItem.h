@class VcardAddress, NSString, NSData, VcardName;

@interface MMVcardItem : NSObject

@property (retain, nonatomic) VcardName *name;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSString *photoType;
@property (retain, nonatomic) NSData *photoBuffer;
@property (retain, nonatomic) VcardAddress *address;
@property (retain, nonatomic) VcardAddress *homeAddress;
@property (retain, nonatomic) VcardAddress *workAddress;
@property (retain, nonatomic) VcardAddress *deliveryAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *mobilePhoneNumber;
@property (retain, nonatomic) NSString *homePhoneNumber;
@property (retain, nonatomic) NSString *workPhoneNumber;
@property (retain, nonatomic) NSString *telAVPhoneNumber;
@property (retain, nonatomic) NSString *birthday;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *role;
@property (retain, nonatomic) NSString *logoType;
@property (retain, nonatomic) NSData *logoBuffer;
@property (retain, nonatomic) NSString *agent;
@property (retain, nonatomic) NSString *organization;
@property (retain, nonatomic) NSString *note;
@property (retain, nonatomic) NSString *soundType;
@property (retain, nonatomic) NSData *soundBuffer;
@property (retain, nonatomic) NSString *url;

+ (BOOL)setVcardAddress:(id)a0 byXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (BOOL)setVCardItem:(id)a0 byXml:(id)a1;

- (id)init;
- (void)print;
- (void).cxx_destruct;

@end
