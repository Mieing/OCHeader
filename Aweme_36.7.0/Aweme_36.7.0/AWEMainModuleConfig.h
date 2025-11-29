@class NSString, NSDictionary, NSObject, AWEDigitalWellbeingLockViewConfiguration;
@protocol AWEFreeFlowAlertManagerProtocol;

@interface AWEMainModuleConfig : NSObject

@property (class, readonly, copy, nonatomic) NSString *privacyPolicyURL;
@property (class, readonly, copy, nonatomic) NSString *privacyPolicySecondPageURL;
@property (class, readonly, copy, nonatomic) NSString *termsOfUseURL;
@property (class, readonly, copy, nonatomic) NSString *cookiesPolicyURL;
@property (class, readonly, copy, nonatomic) NSString *affiliateToken;
@property (class, readonly, nonatomic) BOOL isOversea;
@property (class, readonly, nonatomic) BOOL resetNotificationIndex;
@property (class, readonly, nonatomic) BOOL showMixCollectionList;
@property (class, readonly, copy, nonatomic) AWEDigitalWellbeingLockViewConfiguration *configuration;
@property (class, readonly, copy, nonatomic) NSDictionary *messageTextViewLinkTextAttributes;
@property (class, readonly, nonatomic) NSObject<AWEFreeFlowAlertManagerProtocol> *aweFreeFlowAlertManager;

@end
