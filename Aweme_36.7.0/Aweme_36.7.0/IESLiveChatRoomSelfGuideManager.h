@class NSString, IESLiveChatRoomSelfGuideManagerConfig, IESLiveInteractiveBizFakeUserModel;
@protocol IESLiveChatRoomSelfGuideManagerDelegate, IESLiveChatRoomSelfGuideManagerDataSource;

@interface IESLiveChatRoomSelfGuideManager : NSObject <IESLiveChatRoomSelfGuideProtocol>

@property (retain, nonatomic) IESLiveChatRoomSelfGuideManagerConfig *config;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL currentEnable;
@property (retain, nonatomic) IESLiveInteractiveBizFakeUserModel *preLinkUser;
@property (nonatomic) BOOL isSelfGuideShowing;
@property (nonatomic) BOOL hasShowed;
@property (weak, nonatomic) id<IESLiveChatRoomSelfGuideManagerDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveChatRoomSelfGuideManagerDelegate> userDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isPreLinkForTrack;
- (void)setupSelfGuide:(BOOL)a0;
- (void)trackPreLinkShow;
- (id)preprocessWithUserList:(id)a0;
- (void)setIsInWaitingList:(BOOL)a0;
- (void)slotLayoutDidChange;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
