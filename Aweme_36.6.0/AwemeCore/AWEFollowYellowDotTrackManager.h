@class NSString, NSMutableDictionary, NSDate;

@interface AWEFollowYellowDotTrackManager : NSObject <AWEFollowYellowDotTrackManagerProtocol>

@property (copy, nonatomic) NSString *yellowType;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) BOOL isValid;
@property (nonatomic) long long yellowNum;
@property (retain, nonatomic) NSDate *resignActiveDate;
@property (retain, nonatomic) NSDate *becomeActiveDate;
@property (retain, nonatomic) NSMutableDictionary *redDotClickTrackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateValidStatus:(BOOL)a0 yellowNum:(long long)a1 yellowType:(id)a2;
- (void)updateValidStatus:(BOOL)a0;
- (void)trackLiveBubbleDismissedWithBubbleModel:(id)a0 channelID:(id)a1 reason:(long long)a2;
- (void)trackLiveYellowDotDismissedWithDotType:(id)a0 channelID:(id)a1 componentID:(id)a2 hideType:(long long)a3;
- (void)trackConcernRedDotClick;
- (void)tabBarDidChangeNotification:(id)a0;
- (id)trackDicForYellowDot;
- (id)withdrawStringWithReason:(long long)a0;
- (void)updateYellowDotLogID:(id)a0;
- (id)withdrawStringWithHide:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appWillResignActive:(id)a0;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;

@end
