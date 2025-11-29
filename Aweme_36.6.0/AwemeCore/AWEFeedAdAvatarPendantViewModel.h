@class NSTimer, AWEPlayInteractionUserAvatarElement, UIView, AWEPlayInteractionUserAvatarElementViewModel, NSString, NSMutableDictionary, NSDictionary, AWEAdAvatarPendantView;
@protocol AWEHttpTask;

@interface AWEFeedAdAvatarPendantViewModel : AWEPlayInteractionPersonElementViewModel <AWELiveRoomMessage>

@property (weak, nonatomic) AWEPlayInteractionUserAvatarElement *userAvatarElement;
@property (weak, nonatomic) AWEPlayInteractionUserAvatarElementViewModel *avatarViewModel;
@property (retain, nonatomic) AWEAdAvatarPendantView *adAvatarPendantView;
@property (retain, nonatomic) UIView *adAvatarPendantBackGroundView;
@property (nonatomic) BOOL isDisplayedAdAvatarPendantAnimation;
@property (retain, nonatomic) id<AWEHttpTask> adAvatarPendantReqTask;
@property (retain, nonatomic) id<AWEHttpTask> adAvatarPendantQcpxReqTask;
@property (retain, nonatomic) NSTimer *pendantShowTimer;
@property (nonatomic) BOOL isSufficientRequestReturn;
@property (nonatomic) BOOL giftCouponShowing;
@property (nonatomic) BOOL isTimeUp;
@property (nonatomic) BOOL adAvatarPendantDisplaying;
@property (retain, nonatomic) NSMutableDictionary *jumpSchemaMontageData;
@property (copy, nonatomic) NSDictionary *balanceToCouponData;
@property (copy, nonatomic) id /* block */ clickCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audienceQuitAllRoom;
- (void)trackAdAvatarPendantEvent:(id)a0 withModel:(id)a1 andParams:(id)a2;
- (void)startAdAvatarPendantAnimationIfNeed;
- (void)startAdAvatarPendantAnimation;
- (id)processGiftOpenURL:(id)a0;
- (void)onUserAvatarPendantViewClicked:(id)a0;
- (void)updateAdAvatarPendant;
- (void)resetAdAvatarPendant;
- (void)startAdAvatarPendantAnimationTimer;
- (void)requestQcpxInfo;
- (id)processOpenUrl;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
