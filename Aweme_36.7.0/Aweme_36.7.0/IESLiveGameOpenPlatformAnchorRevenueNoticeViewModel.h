@class NSString, IESLiveGameOpenPlatformNotificationDisplayTimer, IESLiveGameOpenPlatformAnchorRevenueNotificationCenter;

@interface IESLiveGameOpenPlatformAnchorRevenueNoticeViewModel : NSObject <IESLiveGameOpenPlatformAppInstanceLifeCycleObserver>

@property (retain, nonatomic) IESLiveGameOpenPlatformNotificationDisplayTimer *displayTimer;
@property (copy, nonatomic) NSString *revenueText;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) long long animationStyle;
@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorRevenueNotificationCenter *revenueNotificationCenter;
@property (copy, nonatomic) NSString *appId;
@property (readonly, nonatomic) double revenueTextWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)setupObserver;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)hideCurrentNotice;
- (void)fetchLatestNotice;
- (void)handleNoticeMessageDispatched:(id)a0;
- (void)displayNoticeMessage:(id)a0;
- (void)hideRevenueNotice;
- (void)showRevenueNotice;
- (void).cxx_destruct;
- (void)scheduleTimer;
- (id)initWithAppId:(id)a0;

@end
