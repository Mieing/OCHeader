@class NSString;

@interface DYHighRiskRebindHelper : HTSService <DYHighRiskRebindHelperService>

@property (nonatomic) BOOL isContinueLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)skipAction;
+ (void)handleSMSContinueLoginSuccess:(id)a0 account:(id)a1 ticket:(id)a2;
+ (void)skipActionWithUIController:(id)a0 model:(id)a1 params:(id)a2;


@end
