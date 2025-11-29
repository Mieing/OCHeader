@class NSString, NSMutableSet, NSMutableDictionary;

@interface AFDFeedUnfollowFamiliarFollowAndDislikeHelper : NSObject <AWEUserMessage, AFDFeedUnfollowFamiliarFollowAndDislikeHelperProtocol>

@property (retain, nonatomic) NSMutableSet *unfollowedUsers;
@property (retain, nonatomic) NSMutableDictionary *followBtnTriggerResetDict;
@property (retain, nonatomic) NSMutableDictionary *currentAwemeIdDict;
@property (retain, nonatomic) NSMutableDictionary *familiarUsers;
@property (nonatomic) BOOL greetAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowGreetBtnOnFamiliarItem:(id)a0;
+ (BOOL)p_precheckShowGreetBtnOnFamiliarItem:(id)a0;
+ (unsigned long long)greetBtnStyleOnFamiliarItem:(id)a0;
+ (id)followBtnColorModel;
+ (BOOL)canShowRelativeUserAvatarsOnAweme:(id)a0;
+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didTriggerFollowBtnGuideWithMethod:(unsigned long long)a0 awemeModel:(id)a1;
- (void)resetFollowBtnTriggerStatusWithAwemeModel:(id)a0 referString:(id)a1;
- (BOOL)hasUnfollowedUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
