@class NSString, NSTimer, UILabel, UIView;

@interface HTSLivePrivateViewFragment : IESLiveRoomComponent <HTSLiveRoomRemoteActions>

@property (weak, nonatomic) UILabel *privateView;
@property (weak, nonatomic) UILabel *clickView;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSTimer *debugInfoUpdateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)didEnterLiveRoom:(id)a0;
- (void)tapClickView:(id)a0;
- (void)updateDebugInfo;
- (void).cxx_destruct;
- (void)dealloc;

@end
