@class NSString;
@protocol IESCleanScreenReactions;

@interface IESCleanScreenStore : NSObject <IESLiveLongPressActions, IESLiveMediaRoomActions, IESLiveMessageNotifyActions, IESLiveAudienceECommerceActions>

@property (nonatomic) BOOL disableClean;
@property (weak, nonatomic) id<IESCleanScreenReactions> reactions;
@property (readonly, nonatomic) BOOL needShowGuide;
@property (nonatomic) long long messageCount;
@property (nonatomic) long long giftAnimationCount;
@property (nonatomic) long long gameCPCardShowCount;
@property (nonatomic) long long eComMessageShowCount;
@property (nonatomic) long long eComCardShowCount;
@property (nonatomic) long long sellMessageShowCount;
@property (nonatomic) long long pinCommentShowCount;
@property (nonatomic) long long bubbleShowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didShowCommerceCardView;
- (void)onLongPressMenuWillPopup;
- (void)onLongPressMenuWillDismiss;
- (void)mediaIntroduceDidShow;
- (void)mediaIntroduceDidDismiss;
- (void)messageDidShowWithType:(long long)a0 count:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
