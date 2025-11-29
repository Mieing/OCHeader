@class IESLiveGameOpenPlatformAudienceRewardNotificationCenter, NSString, IESLiveGameOpenPlatformAudienceNotificationListPanel, IESLiveGameOpenPlatformNotificationDisplayTimer;

@interface IESLiveGameOpenPlatformAudienceNotificationViewModel : NSObject

@property (copy, nonatomic) NSString *notiText;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) long long animationStyle;
@property (retain, nonatomic) IESLiveGameOpenPlatformNotificationDisplayTimer *displayTimer;
@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceRewardNotificationCenter *rewardNotificationCenter;
@property (copy, nonatomic) id /* block */ routeAction;
@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceNotificationListPanel *listPanel;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL transparent;

- (id)attachingDIContext;
- (void)setupObserver;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)hideCurrentNotice;
- (void)fetchLatestNotice;
- (void)handleNoticeMessageDispatched:(id)a0;
- (void)displayNoticeMessage:(id)a0;
- (id)initWithAppId:(id)a0 diContext:(id)a1;
- (void)routeToNotificationList;
- (void).cxx_destruct;
- (void)scheduleTimer;
- (void)dealloc;

@end
