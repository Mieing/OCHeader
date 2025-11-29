@class NSString, NSArray;

@interface WCCanvasComponentSocialInfo : MMObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSString *titlePrefix;
@property (retain, nonatomic) NSString *titleInfix;
@property (retain, nonatomic) NSString *titleSuffix;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *backgroundImgWithFriends;
@property (retain, nonatomic) NSString *backgroundImgCommon;
@property (retain, nonatomic) NSString *avatarBackgroundImg;
@property (retain, nonatomic) NSString *avatarDesc;
@property (retain, nonatomic) NSString *adAvatarImg;
@property (retain, nonatomic) NSArray *friendAvatarImgs;
@property (retain, nonatomic) NSArray *commonAvatarImgs;
@property (retain, nonatomic) NSString *friendAvatarDescWithFriends;
@property (retain, nonatomic) NSString *friendAvatarDescCommon;
@property (retain, nonatomic) NSString *cardDynamicInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
