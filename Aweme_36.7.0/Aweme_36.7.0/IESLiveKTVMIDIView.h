@class UIView, IESLiveKTVMidiScoreBoardView, NSArray, NSString, UIImageView, IESLiveKTVMidiViewModel, UICollectionView, IESLiveKTVMidiLevelComboView, IESLiveKTVScoreQuartzView;

@interface IESLiveKTVMIDIView : HTSEventForwardingView <UICollectionViewDataSource, UICollectionViewDelegate, CAAnimationDelegate, IESLiveKTVDecorateMidiProtocol>

@property (retain, nonatomic) IESLiveKTVMidiViewModel *viewModel;
@property (nonatomic) BOOL pitchViewAnimated;
@property (retain, nonatomic) UIImageView *pitchImageView;
@property (retain, nonatomic) UIImageView *trailImageView;
@property (retain, nonatomic) UIView *cursorContainer;
@property (retain, nonatomic) UIView *cursorLine;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveKTVScoreQuartzView *quartzView;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIImageView *selectedBgView;
@property (nonatomic) BOOL trailAnimating;
@property (retain, nonatomic) IESLiveKTVMidiLevelComboView *hitComboView;
@property (nonatomic) BOOL scoreLevelShown;
@property (nonatomic) long long style;
@property (nonatomic) unsigned long long feature;
@property (retain, nonatomic) IESLiveKTVMidiScoreBoardView *scorePanelUp;
@property (retain, nonatomic) IESLiveKTVMidiScoreBoardView *scorePanelDown;
@property (retain, nonatomic) NSArray *toneLineColors;
@property (copy, nonatomic) NSString *dressId;
@property (nonatomic) BOOL enableDecorate;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindViewModel;
- (void)p_setupUIs;
- (id)initWithViewModel:(id)a0 style:(long long)a1 feature:(unsigned long long)a2 diContext:(id)a3;
- (void)updateDecorate:(id)a0;
- (BOOL)enableAdvancedMidi;
- (double)p_startTimePosition;
- (void)changeTrailShowStatus:(BOOL)a0;
- (void)p_removeScoreEmitter;
- (void)p_resetScoreEmitter;
- (void)addChallengeBubbleView:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)dealloc;

@end
