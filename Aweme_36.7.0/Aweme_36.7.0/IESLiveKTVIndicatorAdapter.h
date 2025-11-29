@class NSString;

@interface IESLiveKTVIndicatorAdapter : NSObject <IESLiveBigPartyActions, IESLiveMultiAudioAction, IESLiveSocialInteractAction, IESLiveKTVIndicatorLayoutAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (id)initWithDIContext:(id)a0;
- (void)currentLayoutUIDidUpdateFrom:(id)a0 to:(id)a1;
- (void)bigPartyAllMembersListDidChange:(id)a0;
- (void)multiAudioAllMembersListDidChange:(id)a0;
- (void)resumeLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getSceneInsets;
- (void)pr_resumeWithScene:(unsigned long long)a0 layout:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_getInsetsWithScene:(unsigned long long)a0 layout:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInBigParty;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInEqualBigParty;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInAvatarLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInMultiAudio;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInMultiLinker;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInDoubleInteract;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInAudio;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInNormalVideo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_bigPartyGuestListViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_getInsetsWithScene:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_getInsetsWithLayout:(id)a0;

@end
