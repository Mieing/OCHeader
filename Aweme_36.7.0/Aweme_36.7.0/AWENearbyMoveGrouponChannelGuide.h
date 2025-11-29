@class UIView, NSString, AWEAlertNearbyFirstMoveGuideEvent;
@protocol AWENearbyChannelMoveProtocol;

@interface AWENearbyMoveGrouponChannelGuide : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) AWEAlertNearbyFirstMoveGuideEvent *event;
@property (retain, nonatomic) UIView<AWENearbyChannelMoveProtocol> *moveView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cancelUnshowGuide;
+ (void)didFullScreenVCAppearOnce;
+ (BOOL)isFullScreenTransformerRenderCompleted;
+ (void)updateFullScreenTransformerRenderResult:(BOOL)a0;
+ (void)updateSkyLightOpenTimes;
+ (void)trackFirstGuideShowResult:(id)a0;
+ (void)tryPresentChannelGuideWithCanShowBlk:(id /* block */)a0 beginShowBlk:(id /* block */)a1 jumpBlk:(id /* block */)a2 dismissBlk:(id /* block */)a3 animationBeginBlk:(id /* block */)a4 trackParams:(id)a5 transformerOfflineType:(unsigned long long)a6;
+ (BOOL)isMoveGuideViewShowing;
+ (void)hideShownGuide;
+ (long long)skyLightOpenTimes;
+ (void)isFirstGuideSettingDataFromCache:(BOOL)a0;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (id)takeSnapshotOfScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
