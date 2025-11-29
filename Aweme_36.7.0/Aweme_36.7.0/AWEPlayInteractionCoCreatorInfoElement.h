@class NSArray, NSMutableDictionary, NSString, UIView;
@protocol AWEPlayInteractionCoCreatorInfoViewProtocol;

@interface AWEPlayInteractionCoCreatorInfoElement : AWEPlayInteractionLeftElement <AWEUserMessage, AWECoCreatorPanelDelegate, AWELiveVideoFeedUpdateMessage, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEPlayInteractionCoCreatorInfoViewProtocol> *infoView;
@property (copy, nonatomic) NSArray *acceptedCoCreators;
@property (nonatomic) BOOL isPreLoadRequesting;
@property (nonatomic) double liveCheckTime;
@property (retain, nonatomic) NSMutableDictionary *avatarShowDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldShowWithModel:(id)a0 context:(id)a1;
+ (BOOL)shouldAvoidEcommerceEntry:(id)a0;
+ (BOOL)shouldDelayShowWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateLiveStatusForCurrentVideoWith:(id)a0;
- (void)checkRoomResponse:(id)a0;
- (id)paddingOfPreviousElement:(id)a0;
- (id)paddingOfNextElement:(id)a0;
- (id)coCreatorModelWithAuthor;
- (void)trackEnterPersonalDetail:(id)a0;
- (double)checkCoCreatorsLiveStatusTimeGap;
- (void)onFollowStatusChanged:(id)a0 status:(long long)a1 error:(id)a2;
- (void)coCreatorPanelDidShow;
- (void)coCreatorpanelDidDissmiss;
- (void)coCreatorPanelDragOffset:(double)a0;
- (BOOL)shouldCheckCoCreatorsLiveStatus;
- (void)enterUserProfilePage:(id)a0 indexPath:(id)a1;
- (void)tryPreloadCoCreatorInfo;
- (id)currentCoCreator:(id)a0;
- (void)checkCoCreatorLiveStatusIfNeeded;
- (void)trackCoCreatorAvatarShow;
- (id)extraParamsForCheckLiveWithCount:(long long)a0;
- (BOOL)enableCheckCoCreatorsLiveStatus;
- (id)liveStatusEntranceConfig;
- (void)trackCoCreatorAvatarClick:(id)a0;
- (void)registerAvatarShowTrackTaskWithModel:(id)a0;
- (void)didFinishRemoveFans:(id)a0;
- (void)trackEnterPersonalDetail:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateUI;

@end
