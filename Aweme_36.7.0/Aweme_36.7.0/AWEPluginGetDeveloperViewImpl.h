@class UIButton, BDPUniqueID, NSString;

@interface AWEPluginGetDeveloperViewImpl : NSObject <BDPAwemeGetDeveloperViewPluginDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIButton *avatarButton;
@property (weak, nonatomic) UIButton *followButton;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isMorePanelUIStype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)onDevButtonTap:(id)a0;
- (void)onFollowButtonTap:(id)a0;
- (void)changeFollowButton:(BOOL)a0 forButton:(id)a1;
- (id)bdp_getDeveloperView:(id)a0 v2:(BOOL)a1;
- (void)changeFollowButtonNewStyle:(BOOL)a0 forButton:(id)a1;
- (void)changeFollowButtonOldStyle:(BOOL)a0 forButton:(id)a1;
- (id)bdp_getDeveloperView:(id)a0;
- (void)firstFrameReached;
- (void).cxx_destruct;
- (id)init;

@end
