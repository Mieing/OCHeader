@class IESLiveAudienceInteractPermissionChecker, NSString, HTSEventContext, HTSLiveInteractiveAPI, IESLiveMultiInteractUserService, IESLiveAudienceLinkmicPreApplyAnchorAcceptView, IESLiveAudienceLinkmicPreApplyAnchorAcceptViewModel;
@protocol IESLiveRoomService;

@interface IESLiveAudienceLinkmicAnchorPreApplyManager : NSObject <IESLiveAudienceLinkMicAnchorPreApplyRouter>

@property (retain, nonatomic) HTSLiveInteractiveAPI *api;
@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) long long size;
@property (retain, nonatomic) IESLiveAudienceLinkmicPreApplyAnchorAcceptView *audienceLinkmicPreApplyAnchorAcceptView;
@property (retain, nonatomic) IESLiveAudienceLinkmicPreApplyAnchorAcceptViewModel *audienceLinkmicPreApplyAnchorAcceptViewModel;
@property (nonatomic) BOOL enableAudienceLinkmic;
@property (nonatomic) BOOL enableAudienceApply;
@property (nonatomic) long long preApplyAudienceCount;
@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveAudienceInteractPermissionChecker *permissionChecker;
@property (nonatomic) BOOL currentSceneEnableAudiencePreApply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)handlePreApplyMessage:(id)a0;
- (id)audienceLinkmicPreApplyAnchorAcceptViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)preInviteUser:(id)a0 requsetPage:(id)a1 completion:(id /* block */)a2;
- (void)permitPreApplyThenStartSocialInteractWithUser:(id)a0 completion:(id /* block */)a1;
- (void)didAcceptPrepareApplyAndStartSocialInteract:(id)a0;
- (void)didUpdatePreapplyingAudienceCount:(long long)a0;
- (void)openMultiAudioRadioChat;
- (void)openBigPartyWithDynamicFloatWindowLayoutFromAudienceLinkmicWithSource:(id)a0;
- (id)initWithDIContext:(id)a0 room:(id)a1 eventContext:(id)a2;
- (void)handlePreReplyMessage:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
