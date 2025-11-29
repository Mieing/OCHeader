@class NSString;

@interface WCAdFinderFollowInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderAvatar;
@property (retain, nonatomic) NSString *finderNickname;
@property (retain, nonatomic) NSString *finderDesc;
@property (retain, nonatomic) NSString *finderFollowingBtnTitle;
@property (retain, nonatomic) NSString *finderExportId;
@property (retain, nonatomic) NSString *finderObjectNonceId;
@property (nonatomic) long long friendFollowCount;
@property (nonatomic) long long finderFeedCount;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
