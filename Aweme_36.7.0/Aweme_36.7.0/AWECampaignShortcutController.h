@class NSString, AWECampaignShortcutInfoModel, NSDate;

@interface AWECampaignShortcutController : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, AWECampaignShortcutControllerProtocol>

@property (nonatomic) long long reqInterval;
@property (copy, nonatomic) NSString *withdrawAmount;
@property (retain, nonatomic) AWECampaignShortcutInfoModel *model;
@property (copy, nonatomic) NSString *webURL;
@property (retain, nonatomic) NSDate *lastFetchAmountTime;
@property (copy, nonatomic) NSString *willGetInfo;
@property (copy, nonatomic) NSString *withdrawInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)setupShortcutWithModel:(id)a0;
- (void)fetchCampaignWithdrawAmountWithCompletion:(id /* block */)a0;
- (BOOL)enableFetchAmount;
- (void)updateAmountWithDouble:(double)a0;
- (void)openMainVenue;
- (void).cxx_destruct;
- (void)resetInfo;

@end
