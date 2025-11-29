@class DUXBottomNotification, NSMutableArray, NSString;

@interface AWEConcernBellPushBottomGuideHandler : NSObject <AWEConcernBellPushBottomGuideHandlerProtocol>

@property (nonatomic) double bottomNotificationAppearTime;
@property (nonatomic) long long bottomNotificationClickCloseTimes;
@property (nonatomic) long long bottomNotificationShowTimes;
@property (nonatomic) long long bottomNotificationClickButtonTimes;
@property (retain, nonatomic) NSMutableArray *bottomNotificationClosedList;
@property (retain, nonatomic) DUXBottomNotification *bottomGuideView;
@property (nonatomic) BOOL hasRequestBottomNotificationStrategy;
@property (nonatomic) double currentTotalPlayTime;
@property (nonatomic) double lastTotalPlayTime;
@property (copy, nonatomic) NSString *playedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uidPrefixedKeyWithOriginKey:(id)a0;
- (long long)calculateBottomNotificationAppearTimeBySubscribeRate;
- (BOOL)checkForUser:(id)a0;
- (BOOL)bellPushExperimentEnable;
- (BOOL)isAuthorIDInClosedList:(id)a0;
- (BOOL)canShowBottomNotificationWithAuthor:(id)a0;
- (void)updateBottomNotificationClickButtonTimes;
- (void)updateBottomNotificationClickCloseButtonTimes;
- (void)addAuthorIDToClosedList:(id)a0;
- (void)updateBottomNotificationShowTimes;
- (void)trackBottomNotificationShowWithAuthorID:(id)a0;
- (void)showBellPushBottomGuideIfNeedToUser:(id)a0 OnView:(id)a1;
- (void)dismissBellPushBottomGuideFromView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
