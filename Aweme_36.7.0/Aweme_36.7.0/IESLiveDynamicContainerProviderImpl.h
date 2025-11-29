@class IESLiveInteractDynamicElementInfoCacheModel, NSArray, NSMutableDictionary, HTSLiveUser, UIView, NSString;
@protocol IESLiveRoomService, IESLiveInteractionModule;

@interface IESLiveDynamicContainerProviderImpl : NSObject <IESLiveInteractDynamicContainerProvider>

@property (retain, nonatomic) NSMutableDictionary *eventListeners;
@property (retain, nonatomic) NSMutableDictionary *seatUserCache;
@property (retain, nonatomic) NSMutableDictionary *seatPositionCache;
@property (retain, nonatomic) IESLiveInteractDynamicElementInfoCacheModel *seatAllCache;
@property (copy, nonatomic) NSArray *cacheGuestList;
@property (nonatomic) BOOL lynxSeatEnable;
@property (weak, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (nonatomic) BOOL fixLinkType;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (nonatomic) BOOL enableSmallCardOpt;
@property (nonatomic) BOOL isInRoom;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isFullScreenPreStreamView;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIView *seatContainer;
@property (retain, nonatomic) UIView *bizContainer;
@property (retain, nonatomic) NSMutableDictionary *businessItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dynamicPublicScreenAvoidFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (long long)lynxVersion;
- (id)allSeatProviderViews;
- (id)getLayout;
- (void)registerDynamicContainerEvent;
- (void)removeDynamicContainerEvent;
- (id)bizContainerContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bizContainerContainerRect;
- (void)loadLayerContainerView;
- (void)loadLayerContainerViewWithContainer:(id)a0;
- (void)removeLayerContainerView;
- (id)businessItemForBizID:(id)a0;
- (BOOL)isBusinessShowing:(id)a0;
- (id)dynamicViewHolderWithBizId:(id)a0 itemId:(id)a1;
- (void)registerEventListener:(id /* block */)a0 forKey:(id)a1;
- (void)removeEventListenerForKey:(id)a0;
- (void)invokeWithEventName:(id)a0 eventData:(id)a1;
- (id)userInfoByLinkmicUser:(id)a0;
- (id)userInfoByLinkmicUser:(id)a0 fullUser:(BOOL)a1;
- (id)allSeatInfos;
- (void)didUpdatedGuestList:(id)a0;
- (id)filterSeatInfos:(id)a0;
- (BOOL)isLimitVoiceWaveValid:(id)a0;
- (void)registerCommentEvent;
- (void)registerCurrentUserAdminObserver;
- (id)filterAllSeatInfosByGuestlist:(id)a0;
- (BOOL)isCardFeed;
- (id)visibleWithUser:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
