@class NSString, DYASecurityTicketModel, NSDictionary, AWEUserLoginMiddleParamsModel, DYPhoneNumberModel, UIViewController;

@interface DYRouterModelBuilder : NSObject

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
@property (copy, nonatomic) id /* block */ callBack;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isSafeMobile;
@property (nonatomic) unsigned long long pageUseScene;
@property (nonatomic) unsigned long long accountType;
@property (copy, nonatomic) NSString *commercialAccountType;
@property (nonatomic) BOOL isUnBinding;
@property (copy, nonatomic) id /* block */ unBindCompletion;
@property (retain, nonatomic) AWEUserLoginMiddleParamsModel *middleParamsModel;
@property (copy, nonatomic) NSString *autoSendAccountSource;
@property (copy, nonatomic) NSString *passwordScene;
@property (retain, nonatomic) UIViewController *rebindSourceVC;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
