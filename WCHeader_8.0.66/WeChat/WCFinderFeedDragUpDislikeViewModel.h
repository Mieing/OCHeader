@class NSString, WCStateMachine, WCFinderFeedDragUpDislikeConfig;
@protocol WCFinderFeedDragUpDislikeViewModelDelegate;

@interface WCFinderFeedDragUpDislikeViewModel : NSObject <WCStateMachineDelegate>

@property (retain, nonatomic) WCFinderFeedDragUpDislikeConfig *config;
@property (nonatomic) unsigned long long panStartTimeInMs;
@property (nonatomic) double panLocationYInitial;
@property (nonatomic) double panLocationYShowingPanel;
@property (retain, nonatomic) WCStateMachine *stateMachine;
@property (weak, nonatomic) id<WCFinderFeedDragUpDislikeViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setup;
- (void)setupConfig;
- (void)setupStateMachine;
- (double)topPanelNotShowTouchHeight;
- (double)topPanelViewHScale;
- (double)topPanelViewFoldH;
- (double)panelTriggerSpeedScale;
- (double)panelTriggerDistance;
- (void)markPanLocationYShowingPanel:(double)a0;
- (void)tryTriggerEventWithName:(id)a0;
- (void)markStartPanWithY:(double)a0;
- (void)onShortPanelTimeMatch;
- (void)onStateMachineDidEnterState:(id)a0 withTransition:(id)a1;
- (void).cxx_destruct;

@end
