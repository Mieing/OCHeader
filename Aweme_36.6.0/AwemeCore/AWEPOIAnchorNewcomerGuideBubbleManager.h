@class AWEPOIAnchorBubbleView, NSString, AWEPOIEntryAnchorUtil, AWEAwemeModel, UIView;
@protocol AWEAwemeBizPlayVideoProtocol, AWEPOIAnchorFrequencyControllerProtocol;

@interface AWEPOIAnchorNewcomerGuideBubbleManager : NSObject <DUXPopoverDelegate, AWEPOIAnchorBubbleManagerProtocol, AWEAlertProtocol>

@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEPOIAnchorFrequencyControllerProtocol> frequencyController;
@property (retain, nonatomic) AWEPOIEntryAnchorUtil *poiAnchorUtil;
@property (copy, nonatomic) id /* block */ alertCompletionCallback;
@property (retain, nonatomic) AWEPOIAnchorBubbleView *bubbleView;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> videoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isBubbleShowing;
@property (nonatomic) BOOL isBubbleAlreadyShown;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)popoverDidDisappear:(id)a0;
- (void)popoverDidAppear:(id)a0;
- (BOOL)shouldShowBubble;
- (void)configWithContext:(id)a0 target:(id)a1;
- (void)handlePlayerPlayedPeriodChangedWithPlayBackTime:(double)a0;
- (void)handlePlayerWillLoopPlaying:(long long)a0;
- (void)invokeAlertCompletionCallbackAndClearIfNeeded:(BOOL)a0;
- (BOOL)hasInteractionPanelShowing;
- (void)trackOnBubbleShow;
- (void)showBubbleIfNeeded;
- (void).cxx_destruct;
- (void)reset;
- (id)dataModel;

@end
