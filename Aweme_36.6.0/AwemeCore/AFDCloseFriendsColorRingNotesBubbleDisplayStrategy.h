@class NSString, NSMutableDictionary;
@protocol AFDCloseFriendsColorRingBubbleManagerDelegate;

@interface AFDCloseFriendsColorRingNotesBubbleDisplayStrategy : NSObject <AFDCloseFriendsBubblePanelDataSource, AFDCloseFriendsBubblePanelDelegate, AFDCloseFriendsColorRingBubbleDisplayStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *trackerMap;
@property (weak, nonatomic) id<AFDCloseFriendsColorRingBubbleManagerDelegate> managerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHitMomentNotesPreloadTest;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogin;
- (void)showMyNotesPanelWithMomentColorRingInfo:(id)a0;
- (void)showNotesReplyPanelWithMomentColorRingInfo:(id)a0;
- (BOOL)isFirstShowBubbleWithMomentColorRingInfo:(id)a0;
- (void)trackFirstShowWithMomentColorRingInfo:(id)a0;
- (unsigned long long)bubbleTypeOfTheStrategy;
- (BOOL)isBubbleTypeOfAweme;
- (BOOL)canShowBubbleWithMomentColorRingInfo:(id)a0;
- (void)onBubbleViewTappedWithMomentColorRingInfo:(id)a0;
- (void)willShowBubbleWithMomentColorRingInfo:(id)a0 isFirstBlock:(id /* block */)a1;
- (id)bubbleWithNotesInfo:(id)a0;
- (id)zoomProvider;
- (void).cxx_destruct;

@end
