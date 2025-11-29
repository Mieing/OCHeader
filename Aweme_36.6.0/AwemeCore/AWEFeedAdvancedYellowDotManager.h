@class NSString, NSMutableDictionary;

@interface AWEFeedAdvancedYellowDotManager : NSObject <AWEFeedAdvancedYellowDotManagerProtocol>

@property (nonatomic) BOOL isBubbleCloseFired;
@property (copy, nonatomic) NSString *insertFeedId;
@property (copy, nonatomic) NSString *insertRoomId;
@property (copy, nonatomic) NSString *interposeRoomIDList;
@property (retain, nonatomic) NSMutableDictionary *yellowDotOrBubbleShowInfo;
@property (copy, nonatomic) NSString *followInsertAwemeIds;
@property (nonatomic) BOOL isLiveSpecialFollowDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)hideAdvancedYellowDotIfNeed;
- (BOOL)enableShowBubbleWithConfig:(long long)a0;
- (void)liveBubbleShowInfoRecordWithMode:(long long)a0 params:(id)a1;
- (void)liveBubbleClickedInfoRecordWithMode:(long long)a0;
- (void)liveBubbleDismissInfoRecordWithMode:(long long)a0 reason:(long long)a1;
- (void)liveYellowDotShowInfoRecordWithDotType:(id)a0 componentID:(id)a1 isBubbleDemote:(BOOL)a2;
- (id)insertFeedAwemeId;
- (void)cleanFeedAwemeId;
- (id)insertFeedRoomId;
- (id)interposeFeedRoomIDList:(id)a0;
- (void)bubbleDidShowWithMode:(long long)a0;
- (BOOL)canShowAdvancedYellowDotWithNotifyMode:(long long)a0 authorInfo:(id)a1;
- (void)yellowDotDidShowWithConfig:(id)a0;
- (BOOL)canShowAdvancedYellowdot;
- (BOOL)bubbleStrategyEnable;
- (BOOL)didMeetYellowDotSafeguardFrequency:(id)a0;
- (BOOL)meetShowBubbleWithFrequencyWithMode:(long long)a0;
- (BOOL)didNeedAvoidConcernInnerPush;
- (void).cxx_destruct;

@end
