@class NSString, HTSLiveInteractiveAPI;

@interface IESLiveInteractCommentExtensionFragment : IESLiveRoomComponent <IESLiveMessageInteractionModuleCommentAction>

@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)inputtedCommentDidShowAssociationResults:(id)a0;
- (void)inputtedCommentDidClickAssociationResult:(id)a0;
- (void)addAcceptInteractionPSActionSheetItem;
- (void)addInviteAudienceForInteractionPSActionSheetItem;
- (void)removeLinkMicPSActionSheetItem;
- (unsigned long long)currentIESInteractCommentExtensionEnableScene;
- (void).cxx_destruct;

@end
