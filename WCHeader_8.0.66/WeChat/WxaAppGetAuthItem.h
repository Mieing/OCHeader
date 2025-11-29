@class NSString, UserAvatarInfo, ScopeRiskPopUpInfo;

@interface WxaAppGetAuthItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *scopeDesc;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) UserAvatarInfo *userAvatarInfo;
@property (retain, nonatomic) NSString *scopeSubDesc;
@property (retain, nonatomic) ScopeRiskPopUpInfo *riskPopupInfo;
@property (retain, nonatomic) NSString *authWording;
@property (retain, nonatomic) NSString *bottomDesc;
@property (retain, nonatomic) NSString *scopeSecDesc;
@property (retain, nonatomic) NSString *itemTitle;

+ (void)initialize;

@end
