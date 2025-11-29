@class NSDictionary, NSString, AWEAwemeModel;
@protocol AWEPlayInteractionFirstFrameOptimizeDelegate;

@interface AWEPlayInteractionFirstFrameOptimizeManager : NSObject <AWEPlayInteractionFirstFrameOptimizeManagerProtocol>

@property (copy, nonatomic) NSDictionary *firstFrameHideButtonConfig;
@property (copy, nonatomic) NSDictionary *firstFrameHideBarConfig;
@property (weak, nonatomic) AWEAwemeModel *firstVideoModel;
@property (weak, nonatomic) id<AWEPlayInteractionFirstFrameOptimizeDelegate> shouldDelayCellVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)interactionFirstFrameDelayEnableWithModel:(id)a0;
- (void)markFeedReady;
- (BOOL)shouldHideButtonOnFirstFrameVideoBeforeSetData:(id)a0 referString:(id)a1;
- (void)updateFirstVideoModel:(id)a0;
- (unsigned long long)hideBottomBarStrategy;
- (BOOL)shouldHideBottomBarOnFirstFrameVideo:(id)a0 referString:(id)a1;
- (id)bottomBarAfterSetDataWhiteList;
- (BOOL)enableHideBottomBarOnFirstFrameVideo;
- (unsigned long long)hideButtonStrategy;
- (BOOL)shouldHideButtonOnFirstFrameVideo:(id)a0 referString:(id)a1;
- (id)buttonAfterSetDataWhiteList;
- (BOOL)enableHideButtonOnFirstFrameVideo;
- (BOOL)interactionFirstFrameDelayUseFeedReady;
- (BOOL)shouldUpdateFirstInteractionWhenVideoStartWithCellVC:(id)a0;
- (BOOL)interactionFirstFrameDelayOnNextRunloop;
- (BOOL)interactionFirstFrameDelayInitDelay;
- (BOOL)interactionFirstFrameDelayDisplayCall;
- (BOOL)interactionFirstFrameDelayPlayCall;
- (double)interactionExposerDelayDuration;
- (BOOL)ifDelayAddFirstInteractionWithCellVC:(id)a0;
- (BOOL)ifDelayUpdateFirstInteractionWithCellVC:(id)a0;
- (void)markFirstInteractionDelayCompletion;
- (BOOL)isFirstDelayInteractionWithCellVC:(id)a0 model:(id)a1;
- (BOOL)shouldForbidSetModelForFirstInteractionWithCellVC:(id)a0;
- (BOOL)shouldHideBottomBarOnFirstFrameVideoBeforeSetData:(id)a0 referString:(id)a1;
- (BOOL)shouldHideBottomBarOnFirstFrameVideoAfterSetData:(id)a0 referString:(id)a1 identifier:(id)a2;
- (BOOL)shouldHideButtonOnFirstFrameVideoAfterSetData:(id)a0 referString:(id)a1 className:(id)a2;
- (void).cxx_destruct;
- (BOOL)isFirstPlay;

@end
