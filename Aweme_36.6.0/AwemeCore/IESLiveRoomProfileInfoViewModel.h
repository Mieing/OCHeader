@class HTSEventContext, NSString, IESLiveRoomProfileCarouselLabelModel, HTSLiveImage, IESLiveRoomProfileStore, NSMutableSet, NSNumber, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveRoomProfileInfoViewModel : NSObject <HTSLiveMessageSubscriber, HTSLiveDiggAction>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long correctedAnchorInfoType;
@property (retain, nonatomic) NSString *thisRoomTotalUserCount;
@property (retain, nonatomic) NSString *thisRoomCurrentUserCount;
@property (retain, nonatomic) IESLiveRoomProfileCarouselLabelModel *topModel;
@property (retain, nonatomic) IESLiveRoomProfileCarouselLabelModel *bottomModel;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) NSNumber *earnThisRoomCount;
@property (retain, nonatomic) NSNumber *thisRoomDiggCount;
@property (retain, nonatomic) NSString *tabLabelStr;
@property (weak, nonatomic) IESLiveRoomProfileStore *store;
@property (retain, nonatomic) NSMutableSet *trackOrders;
@property (nonatomic) BOOL couldStartTrack;
@property (nonatomic) double trueNameWidth;
@property (nonatomic) BOOL userListScroll;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL needUpdateViewConstraints;
@property (nonatomic) BOOL needReplaceTempInfoLabel;
@property (readonly, nonatomic) HTSLiveImage *authenticationInfo;
@property (readonly, nonatomic) BOOL usePlatformData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoViewModelWithStore:(id)a0 room:(id)a1 trackContext:(id)a2 componentContext:(id)a3;

- (void)didSetAttachingDIContext;
- (BOOL)convergedModule;
- (BOOL)enableToolbarNewStyle;
- (BOOL)enableFeedDrawer;
- (BOOL)shouldShowBottomView;
- (void)trackWithExtraParams:(id)a0;
- (id)topLabelFont;
- (void)continueDiggCount:(long long)a0;
- (void)endContinueDigg;
- (BOOL)shouldShowEnterpriseVerify;
- (void)trackCarouselShow;
- (id)currentEarnStr;
- (void)refreshRoomDiggCount;
- (double)infoViewWidth;
- (BOOL)shouldDoDiggAndOtherTurnAnimation;
- (void)getCorrectedAnchorInfoType;
- (void)caculateViewWidth;
- (void)createInfoModels;
- (void)seqListBecomeScrollable;
- (id)createModelWithInfoType:(long long)a0 subInfoType:(long long)a1 thirdInfoType:(long long)a2 isTop:(BOOL)a3 isAnchor:(BOOL)a4 canCarousel:(BOOL)a5;
- (id)parseLabelType:(id)a0 forTop:(BOOL)a1;
- (void)setupDefaultModels;
- (void)setupModelSignalWithModel:(id)a0 type:(long long)a1 tabType:(long long)a2 isTop:(BOOL)a3;
- (id)currentLiveEarningsStringWithCount:(id)a0;
- (id)currentLiveDiggStringWithCount:(id)a0;
- (id)authenticationTabLabel;
- (void)trackVipAnchorTab;
- (void)changeTabLabelWithVerifyMessage:(id)a0;
- (BOOL)shouldReplaceAuthenticationWhenDigg;
- (double)getNameWidthWithDisplayStr:(id)a0;
- (double)userProfileViewNameWidth;
- (id)includeDiggInfoTypes;
- (id)liveRoomProfileAnchorInfoTypes;
- (double)getDiggWidthWithMindth:(double)a0;
- (double)getTabLabelWidthWithAnchorTabLabel:(id)a0;
- (double)getEarningsWidthWithMindth:(double)a0;
- (void).cxx_destruct;
- (void)clearObserver;
- (id)labelColor;
- (void)messageReceived:(id)a0;
- (id)bottomLabelFont;
- (id)currentRoom;

@end
