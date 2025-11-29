@class NSTimer;

@interface IESLiveVoiceTranslatePanelView : IESLiveVoiceCommonPanelView

@property (nonatomic) BOOL landScapeMode;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL translating;

- (void)setupViewModel;
- (unsigned long long)currentActionType;
- (BOOL)supportActionType:(unsigned long long)a0;
- (unsigned long long)detailAreaType;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)recordBtnDown;
- (void)recordBtnMoveOutside;
- (void)recordBtnMoveInside;
- (void)recordBtnUpInside;
- (void)recordBtnUpOutside;
- (void)recordBtnCancel;
- (void)animationChangeOpacity:(id)a0 hide:(BOOL)a1;
- (void)addBackgroundAnimation;
- (void)removeBackgroundAnimation;
- (void)changeGroupOpacityIsEnd:(BOOL)a0;
- (void)translateComplete;
- (void)translateTimeOut:(id)a0;
- (void)dismiss;
- (void)interrupt;
- (void).cxx_destruct;
- (void)startTimer;
- (void)cancelTimer;
- (void)show;

@end
