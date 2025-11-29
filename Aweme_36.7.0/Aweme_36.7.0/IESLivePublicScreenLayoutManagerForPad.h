@protocol HTSLiveStreamPlayerProvider, IESLiveRevenueInteractModule, IESLiveInteractionModule, IESLiveMultiTabService, IESLiveCommunityInteractModuleAdapter, IESLiveRoomService, IESLiveMessageInteractionModuleUserEnterInterface;

@interface IESLivePublicScreenLayoutManagerForPad : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> streamPlayerProvider;
@property (weak, nonatomic) id<IESLiveMultiTabService> multiTabService;
@property (weak, nonatomic) id<IESLiveMessageInteractionModuleUserEnterInterface> userEnterProvider;
@property (retain, nonatomic) id<IESLiveCommunityInteractModuleAdapter> communityInteractAdapter;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueAdapter;
@property (retain, nonatomic) id<IESLiveInteractionModule> socialAdapter;
@property (nonatomic) unsigned long long currentScene;
@property (nonatomic) unsigned long long horizontalLayoutType;
@property (nonatomic) double suitableHeight;

- (id)initWithDIContext:(id)a0;
- (double)roomContainerHeight;
- (double)userEnterViewHeight;
- (double)userEnterViewSpacing;
- (double)designatedMessageListWidth;
- (BOOL)isSmallGiftViewMoveDownScene;
- (BOOL)isHorisontal;
- (double)getConstMessageListHeight;
- (double)bottomPaddingForCaculate;
- (double)allAvoidHeight;
- (double)smallGiftViewHeight;
- (double)userEnterAvoidHeight;
- (double)smallGiftAvoidHeight;
- (double)messageListMinHeight;
- (BOOL)isiPadAnchorLinkAdaptOptimizeForAudience;
- (BOOL)isDeviceLandscape;
- (double)commonMessageListHeight;
- (double)p_constMessageListHeightForDefaultScene;
- (void).cxx_destruct;
- (BOOL)isAnchor;

@end
