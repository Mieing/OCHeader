@class HTSLiveAIClone, HTSLiveAICloneConvItem, IESLiveAICloneGuideView, NSString, UIButton;
@protocol IESLiveAICloneAction;

@interface IESLiveAICloneFragment : IESLiveRoomComponent <IESLiveAICloneRouter, IESLiveInteractAction, HTSLiveMessageSubscriber, IESLiveMessageInteractionAssetUpdateAction>

@property (nonatomic) BOOL aiCloneSettingEnable;
@property (nonatomic) BOOL toolBarItemIsOnShow;
@property (nonatomic) BOOL isOnRtcChannel;
@property (nonatomic) BOOL ignoreRtcCheck;
@property (nonatomic) BOOL isAnchorRole;
@property (retain, nonatomic) id<IESLiveAICloneAction> aiCloneActionCreator;
@property (nonatomic) BOOL aiCloneEntryShow;
@property (retain, nonatomic) UIButton *aiCloneBtn;
@property (retain, nonatomic) HTSLiveAIClone *aiCloneInfo;
@property (retain, nonatomic) IESLiveAICloneGuideView *guideView;
@property (retain, nonatomic) HTSLiveAICloneConvItem *currentConvItem;
@property (nonatomic) BOOL aiEntryShowTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)aicloneInfoUpdate:(id)a0;
- (BOOL)aiCloneAuthCheck;
- (void)openAICloneFormatWithSchema:(id)a0 extraParams:(id)a1;
- (id)aiEntryOnCommentButton;
- (void)hideAICloneGuide;
- (id)getLiveGoodsDetailBizParams;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)didLeaveRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)trackFormatEntranceShowWithExtraParams:(id)a0;
- (void)clickAICloneBtn;
- (void)showAIBootGuideWithMessage:(id)a0;
- (void)aiCloneEntryChangeToShow:(BOOL)a0;
- (void)trackGuideBubbleTap;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
