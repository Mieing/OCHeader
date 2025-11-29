@class HTSEventContext, NSDictionary, NSMutableDictionary;
@protocol IESLiveRoomService, IESLiveGiftPlayerDelegate;

@interface IESLiveSmallGiftPlayer : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL trayGroupModeServerControl;
@property (nonatomic) long long maxComboCountForLabel;
@property (nonatomic) BOOL enableSmallGiftComboLimit;
@property (nonatomic) long long smallGiftComboLimitCount;
@property (nonatomic) BOOL postAnimationIsPlaying;
@property (copy, nonatomic) NSDictionary *anchorPostEffectFrequencyControlConfig;
@property (retain, nonatomic) NSMutableDictionary *postAnimationRecord;
@property (weak, nonatomic) id<IESLiveGiftPlayerDelegate> delegate;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL isVSRoom;

- (void)didSetAttachingDIContext;
- (id)commonTrackParams:(id)a0;
- (id)initWithTrackContext:(id)a0;
- (long long)isAnchorForTracker;
- (void)startPlayingGiftWithNode:(id)a0 on:(id)a1;
- (void)refreshComboStateWithNode:(id)a0;
- (void)tapContainerWithNode:(id)a0 animationModel:(id)a1 on:(id)a2;
- (void)tapAvatarViewWithNode:(id)a0 animationModel:(id)a1 on:(id)a2;
- (void)trackForTrayViewShow:(id)a0 withEndStep:(BOOL)a1;
- (void)smallGiftViewDisplayFinishedFor:(id)a0;
- (void)tapPreAnimationWithNode:(id)a0 animationModel:(id)a1 on:(id)a2;
- (void)tapPostAnimationWithNode:(id)a0 animationModel:(id)a1 on:(id)a2;
- (void)trackForPreAnimationWithNode:(id)a0 animationModel:(id)a1 trackEvent:(id)a2;
- (BOOL)shouldShowPostAnimation:(id)a0;
- (void)recordPostAnimation:(id)a0;
- (void)trackForPostAnimationWithNode:(id)a0 animationModel:(id)a1 trackEvent:(id)a2;
- (id)constructVectorFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
- (double)normOfVector:(id)a0;
- (double)vector:(id)a0 dotProduct:(id)a1;
- (id)vector:(id)a0 crossProduct:(id)a1;
- (BOOL)vector:(id)a0 hasSameDirectionWith:(id)a1;
- (void)trackForGiftTrayPayingUserShow:(id)a0;
- (void)trackForGiftViewClicked:(id)a0 animationModel:(id)a1;
- (BOOL)shouldOpenTraySchemaUrlWithNode:(id)a0;
- (void)preloadDressPreviewIfNeeded:(id)a0 schema:(id)a1 on:(id)a2 fromAvatar:(BOOL)a3;
- (void)jumpToSameGift:(id)a0;
- (void)showUserPreviewView:(id)a0;
- (void)trackForAvatarViewClicked:(id)a0 animationModel:(id)a1;
- (void)toastWithNode:(id)a0;
- (id)commonTrackParamsForTrayClickWithAnimationModel:(id)a0;
- (id)getMissionInfoWithNode:(id)a0;
- (id)trackParamsForTrayAnimation:(id)a0;
- (void).cxx_destruct;

@end
