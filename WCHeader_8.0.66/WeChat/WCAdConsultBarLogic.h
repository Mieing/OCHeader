@class NSString, MMTimer, WCAdConsultBarCarouselInfo, WCAdConsultBarView;

@interface WCAdConsultBarLogic : WCAdvertiseOperationLogicBase

@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) MMTimer *animateTimer;
@property (retain, nonatomic) WCAdConsultBarCarouselInfo *barCarouselInfo;
@property (nonatomic) BOOL isFirstAnimation;
@property (retain, nonatomic) WCAdConsultBarView *barView;

+ (id)getConsultLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)startTimerIfNeed;
- (void)timerFired;
- (void).cxx_destruct;

@end
