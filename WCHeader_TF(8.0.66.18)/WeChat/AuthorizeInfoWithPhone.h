@class NSString, AuthenticNameInfo, GetAllPhoneData, ScopeWording, AuthorizeWording;

@interface AuthorizeInfoWithPhone : WXPBGeneratedMessage

@property (retain, nonatomic) AuthenticNameInfo *realnameInfo;
@property (retain, nonatomic) GetAllPhoneData *allphoneInfo;
@property (retain, nonatomic) NSString *applyWording;
@property (retain, nonatomic) NSString *realnameWording;
@property (retain, nonatomic) NSString *phoneWording;
@property (retain, nonatomic) ScopeWording *scopeWording;
@property (retain, nonatomic) AuthorizeWording *authorizeWording;

+ (void)initialize;

@end
