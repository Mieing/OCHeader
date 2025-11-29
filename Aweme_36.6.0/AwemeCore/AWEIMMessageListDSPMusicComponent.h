@class NSString;
@protocol IESIMDSPMusicServiceControllerProtocol;

@interface AWEIMMessageListDSPMusicComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListViewControllerAction, IESIMMessageDSPMusicComponentInterface>

@property (retain, nonatomic) id<IESIMDSPMusicServiceControllerProtocol> dspMusicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)recallMessage:(id)a0 toMessage:(id)a1;
- (void)willDeleteMessage:(id)a0;
- (id)playMessageMusicId;
- (id)playMessageID;
- (void)playWithMusicMessage:(id)a0;
- (void)pauseWithMusicMessage:(id)a0;
- (BOOL)hasMusicController;
- (void)playDspMusicIfNeeded:(id)a0 stopPlayWhenExitDSPPlayer:(BOOL)a1;
- (void)cellDidTapped:(id)a0 withMessage:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;

@end
