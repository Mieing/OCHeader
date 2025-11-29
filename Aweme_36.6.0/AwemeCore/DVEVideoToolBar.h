@class DVEVCContext, NSBundle, NSString, UILabel, UIView, UIButton;
@protocol DVEFullScreenProtocol, DVETrackEventProtocol, DVEAlertViewProtocol, DVEComponentViewManagerProtocol, DVELoadingViewProtocol, DVECoreActionServiceProtocol, DVEEditConfigProtocol;

@interface DVEVideoToolBar : UIView <DVECoreActionDelegate>

@property (retain, nonatomic) UIView *durationLable;
@property (retain, nonatomic) UILabel *currentTimeLable;
@property (retain, nonatomic) UILabel *maxTimeLable;
@property (retain, nonatomic) UILabel *timeSplitLable;
@property (retain, nonatomic) UIButton *limitWaringBtn;
@property (nonatomic) BOOL alreadyLongTime;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (weak, nonatomic) id<DVEAlertViewProtocol> alertView;
@property (weak, nonatomic) id<DVEEditConfigProtocol> editConfig;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomComponentManager;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEventer;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (retain, nonatomic) NSBundle *advanceEditorBundle;
@property (nonatomic) double maxVideoExportSeconds;
@property (nonatomic) double renderEnd;
@property (nonatomic) double startUndo;
@property (nonatomic) double endUndo;
@property (nonatomic) double startRedo;
@property (nonatomic) double endRedo;
@property (retain, nonatomic) UIButton *fullScreenButton;
@property (retain, nonatomic) UIButton *undoButton;
@property (retain, nonatomic) UIButton *redoButton;
@property (retain, nonatomic) UIButton *playButton;
@property (weak, nonatomic) id<DVEFullScreenProtocol> delegate;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionMethod:(id)a0;
- (void)nleEditorDidChange;
- (void)buildLayout;
- (void)playFromSlotStart;
- (void)trackEventClickPlayButton;
- (void)hiddenButton:(BOOL)a0;
- (void)trackUndoRedo;
- (void)turnFullScreen;
- (void)taplimitWaringBtn;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVideoInfo;

@end
