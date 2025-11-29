@class NSString, HbEnvelopSourceNew_HbEnvelopSourceLocal;

@interface HbEnvelopSourceNew : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *corpName;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *materialId;
@property (retain, nonatomic) HbEnvelopSourceNew_HbEnvelopSourceLocal *sourceObject;
@property (nonatomic) unsigned int isExpired;
@property (nonatomic) unsigned int isSelected;
@property (retain, nonatomic) NSString *exchangeTitle;
@property (retain, nonatomic) NSString *exchangeUrl;
@property (nonatomic) unsigned int hasSource;
@property (nonatomic) unsigned long long lastObtainTime;
@property (nonatomic) unsigned int disable;
@property (retain, nonatomic) NSString *disableText;
@property (nonatomic) unsigned int expiredTime;

+ (void)initialize;

@end
