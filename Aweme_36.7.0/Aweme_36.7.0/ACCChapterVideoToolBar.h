@class DUXRadioBox, DVEVCContext, NSString, UILabel, UIView, UIButton;
@protocol ACCChapterVideoToolBarDelegate, DVECoreActionServiceProtocol;

@interface ACCChapterVideoToolBar : UIView <DVECoreActionDelegate>

@property (retain, nonatomic) UIView *durationLable;
@property (retain, nonatomic) UILabel *currentTimeLable;
@property (retain, nonatomic) UILabel *maxTimeLable;
@property (retain, nonatomic) UILabel *timeSplitLable;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (retain, nonatomic) UIButton *showChapterProgressBarButton;
@property (retain, nonatomic) DUXRadioBox *showChapterProgressBarIcon;
@property (retain, nonatomic) UILabel *showChapterProgressBarLabel;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (weak, nonatomic) id<ACCChapterVideoToolBarDelegate> delegate;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (nonatomic) BOOL progressBarButtonIsSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionMethod:(id)a0;
- (void)nleEditorDidChange;
- (void)setShowChapterProgressBar:(BOOL)a0 showClearBtn:(BOOL)a1;
- (void)buildLayout;
- (void)clearButtonDidClicked:(id)a0;
- (void)showChapterProgressBarButtonAction:(id)a0;
- (void)playFromSlotStart;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVideoInfo;

@end
