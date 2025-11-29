@class AWEAdLynxCardViewModel, NSString, AWEAwemeModel;

@interface AWEAdLynxCardView : AWEBDARifleView <AWEBDARifleViewDelegate>

@property (retain, nonatomic) AWEAdLynxCardViewModel *viewModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double initLeftContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAweme:(id)a0;
- (void)loadURL:(id)a0 withConfiguration:(id)a1;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (id)lynxBridges;
- (void)bindViewModel:(id)a0;
- (void)configSelf;
- (void)sendVoicePlayStatus:(unsigned long long)a0 voiceURL:(id)a1;
- (double)nativeLeftContainerViewHeight;
- (void)tryShowAdLynxCard;
- (void)hideNativeInfoArea;
- (void)showNativeInfoArea;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)viewWillAppear;
- (void)applicationWillEnterForeground;
- (void)reset;
- (double)currentPlaybackTime;
- (void)timeout;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)viewWillDisappear;

@end
