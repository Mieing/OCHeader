@class NSString, RedEnvelopesLiteappJumpInfo, HbEnvelopSourceLocal;

@interface HbEnvelopSource : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *corpName;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *materialId;
@property (retain, nonatomic) HbEnvelopSourceLocal *sourceObject;
@property (retain, nonatomic) NSString *overtimeLabel;
@property (nonatomic) unsigned int isExpired;
@property (nonatomic) unsigned int isSelected;
@property (nonatomic) unsigned long long obtainTime;
@property (nonatomic) unsigned int materialFlag;
@property (nonatomic) unsigned int userFlag;
@property (retain, nonatomic) NSString *leaveText;
@property (retain, nonatomic) NSString *tempText;
@property (nonatomic) unsigned int detailLinkType;
@property (retain, nonatomic) NSString *detailLinkAppname;
@property (retain, nonatomic) NSString *detailLinkUrl;
@property (retain, nonatomic) NSString *detailLinkTitle;
@property (retain, nonatomic) NSString *exchangeTitle;
@property (retain, nonatomic) NSString *exchangeUrl;
@property (nonatomic) unsigned int hasSource;
@property (nonatomic) unsigned long long lastOptainTime;
@property (nonatomic) unsigned int disable;
@property (retain, nonatomic) NSString *disableText;
@property (retain, nonatomic) NSString *timelimitPromoText;
@property (retain, nonatomic) NSString *timelimitPromoSignature;
@property (retain, nonatomic) RedEnvelopesLiteappJumpInfo *coverSetLiteappInfo;

+ (void)initialize;

@end
