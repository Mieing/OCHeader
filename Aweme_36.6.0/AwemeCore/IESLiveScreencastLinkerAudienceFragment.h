@class NSString, IESLiveScreencastLinkerAudienceStore, HTSLiveScreencastLinkInfoLayout;
@protocol IESLiveCompoundSubscription;

@interface IESLiveScreencastLinkerAudienceFragment : IESLiveRoomComponent <IESLiveScreencastLinkerAudienceRouter>

@property (retain, nonatomic) IESLiveScreencastLinkerAudienceStore *store;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) HTSLiveScreencastLinkInfoLayout *remoteAnchorInfoLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (id)linkedUsers;
- (void)setupBinds;
- (BOOL)isMultiLinkerProcessing;
- (void)onClearScreenMode:(id)a0;
- (void).cxx_destruct;
- (void)setupObservers;
- (void)dealloc;

@end
