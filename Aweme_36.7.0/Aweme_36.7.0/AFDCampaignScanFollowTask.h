@class NSString;

@interface AFDCampaignScanFollowTask : AFDCampaignBaseTask <AWEUserMessage>

@property (copy, nonatomic) NSString *scannedUserID;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL hasShownLandingToast;
@property (nonatomic) BOOL hasShownEnterProfileToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topic;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)willSendUnfollowUserRequestWithContext:(id)a0;
- (void)receiveEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
