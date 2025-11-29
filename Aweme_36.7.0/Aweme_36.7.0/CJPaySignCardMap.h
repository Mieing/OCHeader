@class NSString, CJPayQuickBindCardModel;

@interface CJPaySignCardMap : JSONModel

@property (copy, nonatomic) NSString *oneKeyBankInfoStr;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *allowTransCardType;
@property (copy, nonatomic) NSString *idNameMask;
@property (copy, nonatomic) NSString *idType;
@property (copy, nonatomic) NSString *isAuthed;
@property (copy, nonatomic) NSString *isSetPwd;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *skipPwd;
@property (copy, nonatomic) NSString *smchId;
@property (copy, nonatomic) NSString *uidMobileMask;
@property (copy, nonatomic) NSString *payUID;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *jumpQuickBindCard;
@property (retain, nonatomic) CJPayQuickBindCardModel *quickCardModel;
@property (copy, nonatomic) NSString *displayIcon;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *protocolDescription;
@property (copy, nonatomic) NSString *buttonDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
