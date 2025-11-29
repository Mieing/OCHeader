@class UINavigationController, RACDisposable, NSString, NSNumber, AWEUIAlertView;

@interface AWELivePodcastRegisterManager : NSObject <UITextViewDelegate, IESLivePodcastRegisterService>

@property (retain, nonatomic) AWEUIAlertView *alert;
@property (retain, nonatomic) RACDisposable *webPageDismissDispose;
@property (nonatomic) unsigned long long realNameStatus;
@property (nonatomic) BOOL phoneBinded;
@property (nonatomic) BOOL agreementDone;
@property (nonatomic) BOOL contactAuthorized;
@property (nonatomic) long long verifyRiskLevel;
@property (retain, nonatomic) NSString *ticket;
@property (weak, nonatomic) UINavigationController *nav;
@property (copy, nonatomic) NSString *createRoomTypeString;
@property (retain, nonatomic) NSNumber *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELivePodcastRegisterManagerDOUYINAdaperClass;
+ (id)sharedInstance;

- (id)enterFrom;
- (void)checkProcess;
- (void)addScertificationStatusOberserve;
- (void)useNewCertCompletionWithCertResult:(id)a0;
- (id)getURLString;
- (void)updateRealNameVerifyStatus:(id)a0;
- (void)showRealNameVerify;
- (void)showAgreementAlert:(id)a0 completion:(id /* block */)a1;
- (void)retryStartLive;
- (id)aAWELivePodcastRegisterManagerDOUYINAdaper;
- (void)updateRealNameVerifyStatus;
- (void).cxx_destruct;
- (void)showViewController:(id)a0;
- (id)init;
- (void)setupObservers;

@end
