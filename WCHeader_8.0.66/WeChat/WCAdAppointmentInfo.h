@class NSString;

@interface WCAdAppointmentInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) unsigned long long appointmentId;
@property (retain, nonatomic) NSString *btnTitleAfterAppointment;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *extraContent;
@property (retain, nonatomic) NSString *submitBtnTitle;
@property (retain, nonatomic) NSString *cancelBtnTitle;
@property (retain, nonatomic) NSString *submitSucToast;
@property (retain, nonatomic) NSString *submitFailedToast;
@property (retain, nonatomic) NSString *cancelSucToast;
@property (retain, nonatomic) NSString *cancelFailedToast;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *expiredBtnTitle;
@property (nonatomic) BOOL requestPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumberRequestIcon;
@property (retain, nonatomic) NSString *phoneNumberRequestName;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)needRequestPhoneNumber;
- (void).cxx_destruct;

@end
