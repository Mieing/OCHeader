@class NSString, DYASecurityTicketModel, NSDictionary, AWEUserLoginMiddleParamsModel, DYPhoneNumberModel, UIViewController;

@interface DYRouterModel : NSObject

@property (nonatomic) unsigned long long backStrategy;
@property (retain, nonatomic) DYPhoneNumberModel *phoneContext;
@property (retain, nonatomic) DYPhoneNumberModel *oldPhoneContext;
@property (retain, nonatomic) NSString *emailContext;
@property (retain, nonatomic) NSString *passwordContext;
@property (nonatomic) unsigned long long platformContext;
@property (nonatomic) unsigned long long bindStrategy;
@property (retain, nonatomic) DYASecurityTicketModel *ticketModel;
@property (nonatomic) BOOL shouldHideFAQButton;
@property (retain, nonatomic) NSDictionary *extraDic;
@property (nonatomic) BOOL isEntry;
@property (nonatomic) BOOL shouldHideNav;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *authInfo;
@property (nonatomic) BOOL isSafeMobile;
@property (nonatomic) unsigned long long pageUseScene;
@property (nonatomic) unsigned long long accountType;
@property (retain, nonatomic) AWEUserLoginMiddleParamsModel *middleParamsModel;
@property (copy, nonatomic) NSString *autoSendAccountSource;
@property (retain, nonatomic) NSString *passwordScene;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *commercialAccountType;
@property (nonatomic) BOOL isUnBinding;
@property (copy, nonatomic) id /* block */ unBindCompletion;
@property (nonatomic) BOOL shouldJumpBindConflict;
@property (nonatomic) BOOL isFromSMSToPassword;
@property (nonatomic) BOOL isFromPrivacyPanel;
@property (retain, nonatomic) UIViewController *rebindSourceVC;

+ (id)instanceWithBlock:(id /* block */)a0;
+ (id)instanceWithBuilder:(id)a0;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 ticketModel:(id)a1;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 phoneContext:(id)a1 ticketModel:(id)a2;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 emailContext:(id)a1 ticketModel:(id)a2;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 emailContext:(id)a1 passwordContext:(id)a2;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 platformContext:(unsigned long long)a1 ticketModel:(id)a2;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 platformContext:(unsigned long long)a1 ticketModel:(id)a2 extraDict:(id)a3;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 platformContext:(unsigned long long)a1 ticketModel:(id)a2 authinfo:(id)a3;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 bindStrategy:(unsigned long long)a1 ticketModel:(id)a2;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 platformContext:(unsigned long long)a1 bindStrategy:(unsigned long long)a2 ticketModel:(id)a3;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 platformContext:(unsigned long long)a1 bindStrategy:(unsigned long long)a2 ticketModel:(id)a3 authInfo:(id)a4;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 bindStrategy:(unsigned long long)a1 platformContext:(unsigned long long)a2 phoneContext:(id)a3 ticketModel:(id)a4;
+ (id)instanceWithBackStrategy:(unsigned long long)a0 bindStrategy:(unsigned long long)a1 platformContext:(unsigned long long)a2 phoneContext:(id)a3 ticketModel:(id)a4 extraDict:(id)a5;

- (void).cxx_destruct;

@end
