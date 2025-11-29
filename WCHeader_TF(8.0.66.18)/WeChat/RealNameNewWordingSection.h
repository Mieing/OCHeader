@class CreditType;

@interface RealNameNewWordingSection : WXPBGeneratedMessage

@property (retain, nonatomic) CreditType *cretype;
@property (nonatomic) BOOL needProfessionName;
@property (nonatomic) BOOL needAddress;
@property (nonatomic) BOOL needCreExpireDate;
@property (nonatomic) BOOL needCreidRenewal;
@property (nonatomic) BOOL needBirthDate;
@property (nonatomic) BOOL needNationality;
@property (nonatomic) BOOL needCreEffectDate;
@property (nonatomic) BOOL needPhoneNo;
@property (nonatomic) BOOL needSex;

+ (void)initialize;

@end
