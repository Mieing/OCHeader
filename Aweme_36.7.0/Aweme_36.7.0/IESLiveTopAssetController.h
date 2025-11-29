@class NSString, NSMutableDictionary, IESLiveGiftMP4Player, HTSEventContext, IESLiveActivityAnimationQueue, IESLiveTopAssetAnimationNode, HTSLiveEffectPlayerStringPiece;
@protocol IESLiveRoomService, IESLiveScreenModule, IESLiveUserService;

@interface IESLiveTopAssetController : NSObject <HTSLiveMessageSubscriber, IESLiveGiftMP4PlayerDelegate, IESLiveActivityAnimationMessageHandlerDelegate>

@property (retain, nonatomic) IESLiveGiftMP4Player *mp4Player;
@property (retain, nonatomic) NSMutableDictionary *messageHandlerMap;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveActivityAnimationQueue *queue;
@property (retain, nonatomic) IESLiveTopAssetAnimationNode *playingNode;
@property (retain, nonatomic) IESLiveTopAssetAnimationNode *lastNeedCyclingNode;
@property (nonatomic) long long orientation;
@property (nonatomic) long long totalFrameCount;
@property (nonatomic) BOOL looping;
@property (nonatomic) BOOL enableLoopPlay;
@property (nonatomic) unsigned long long contentMode;
@property (retain, nonatomic) HTSLiveEffectPlayerStringPiece *stringPiece;
@property (nonatomic) BOOL enableRareGiftSwitch;
@property (nonatomic) BOOL disableRareGiftFlag;
@property (retain, nonatomic) id<IESLiveScreenModule> screenModule;
@property (weak, nonatomic) id<IESLiveUserService> userService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)frameCallBack:(double)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)mp4Player:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)mp4Player:(id)a0 successParseConfigResourceModel:(id)a1;
- (void)mp4Player:(id)a0 didEndPlayingFrame:(id)a1;
- (BOOL)convergedModule;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (id)baseTrackParam;
- (void)playIfNeed;
- (void)disableRareGiftPlay:(BOOL)a0;
- (void)controllerDidActive;
- (void)controllerDidUnActive;
- (void)cancelNodeWithAnimationType:(long long)a0;
- (void)closeMp4Player;
- (void)enqueLastNeedCyclingNodeIfNeed;
- (void)playWithNode:(id)a0;
- (BOOL)roleGiftIsDisableNow;
- (void)showStringPieceIfNeeded:(id)a0 needCircle:(BOOL)a1;
- (void)trackEffectShowWithNode:(id)a0;
- (void)mockNotifyMsgIfNeed:(id)a0;
- (long long)getMessageTypeWithMessage:(id)a0;
- (id)getMessageHandlerWithType:(long long)a0;
- (void)didFinishSingleLoop;
- (void)trackTopEffectShowWithNode:(id)a0;
- (void)trackPrizeNoticeShowWithNode:(id)a0;
- (void)trackRoleEffectShowIfNeeded:(id)a0;
- (void).cxx_destruct;
- (long long)currentTimestamp;
- (void)messageReceived:(id)a0;

@end
