@class NSString, NSMutableDictionary, AFDBubbleAudioPlayerController;
@protocol AFDCloseFriendsColorRingBubbleManagerDelegate;

@interface AFDCloseFriendsColorRingAudioBubbleDisplayStrategy : NSObject <AFDCloseFriendsBubblePanelDataSource, AFDCloseFriendsBubblePanelDelegate, AFDCloseFriendsColorRingBubbleDisplayStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *trackerMap;
@property (retain, nonatomic) AFDBubbleAudioPlayerController *playerController;
@property (nonatomic) BOOL shouldPlayWhenPanelAppear;
@property (nonatomic) BOOL shouldContinuePlayWhenPanelAppear;
@property (weak, nonatomic) id<AFDCloseFriendsColorRingBubbleManagerDelegate> managerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogin;
- (void)showMyNotesPanelWithMomentColorRingInfo:(id)a0;
- (void)showNotesReplyPanelWithMomentColorRingInfo:(id)a0;
- (BOOL)isFirstShowBubbleWithMomentColorRingInfo:(id)a0;
- (void)trackFirstShowWithMomentColorRingInfo:(id)a0;
- (void)preloadAudioWhenNotesShow:(id)a0;
- (id)createPlayerController:(BOOL)a0;
- (void)prepareForShowPanel:(BOOL)a0;
- (unsigned long long)bubbleTypeOfTheStrategy;
- (BOOL)isBubbleTypeOfAweme;
- (BOOL)canShowBubbleWithMomentColorRingInfo:(id)a0;
- (void)onBubbleViewTappedWithMomentColorRingInfo:(id)a0;
- (void)willShowBubbleWithMomentColorRingInfo:(id)a0 isFirstBlock:(id /* block */)a1;
- (id)bubbleWithNotesInfo:(id)a0;
- (void)bubblePanelDidAppear;
- (void)bubblePanelDidDisappear;
- (void)bubblePanelDidDismiss;
- (id)zoomProvider;
- (void)bubblePanelDidGetPublishModel:(id)a0;
- (void)bubblePanelDidGetAweme:(id)a0 shouldPlay:(BOOL)a1;
- (void)bubblePanelStartRequestAwemeWithNotesInfo:(id)a0;
- (void).cxx_destruct;

@end
