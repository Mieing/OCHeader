@class NSString, NSMutableSet, NSMutableDictionary;

@interface AFDCloseFriendsStoryCircleShowTracker : NSObject <AWEUserMessage, AFDCloseFriendsStoryCircleShowTrackerProtocol>

@property (retain, nonatomic) NSMutableSet *trackerSet;
@property (retain, nonatomic) NSMutableDictionary *eventParamsMap;
@property (nonatomic) BOOL currentViewIsNotVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewWillDisappear;
- (BOOL)needTrackShowEventWithIdentifier:(id)a0;
- (void)recordParams:(id)a0 withIdentifier:(id)a1;
- (void)p_trackStoryCircleShowEvent;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
