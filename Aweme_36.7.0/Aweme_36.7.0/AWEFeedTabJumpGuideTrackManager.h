@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEFeedTabJumpGuideTrackManager : NSObject <AWEFeedTabJumpGuideTrackProtocol>

@property (nonatomic) BOOL status;
@property (nonatomic) BOOL processing;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSMutableDictionary *awemeTrackInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setTrackParams:(id)a0;
- (void)setTrackStatus:(BOOL)a0;
- (id)getTabJumpGuideParamsWithTabID:(id)a0;
- (void)trackGuideFreshButtonRequestRecvWithAwemeList:(id)a0 isLoadMore:(BOOL)a1;
- (void)trackGuideFreshButtonVideoShowWithAweme:(id)a0;
- (void)trackGuideFreshButtonVideoAction:(id)a0 withAweme:(id)a1;
- (void)trackGuideFreshButtonNotShowWithAweme:(id)a0;
- (void)saveBtnCantShowReason:(id)a0 forAweme:(id)a1;
- (void)saveBtnTriggerEvent:(long long)a0 forAweme:(id)a1;
- (void)setLandingProcessing:(BOOL)a0;
- (void)saveBtnDidShowForAweme:(id)a0;
- (id)btnTriggerOfAweme:(id)a0;
- (void)savePlayProgress:(long long)a0 forAweme:(id)a1;
- (void)trackGuideFreshButtonVideoActionWithEvent:(long long)a0 aweme:(id)a1;
- (BOOL)isValidGudieBtnAweme:(id)a0;
- (id)trackInfoForAweme:(id)a0;
- (id)triggerStringForFeedTabJumpStrategyEventType:(long long)a0;
- (void).cxx_destruct;

@end
