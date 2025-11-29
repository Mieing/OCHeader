@class UIButton, IESLiveKTVControlStore, RACDisposable, NSString, IESLiveKTVBarButton, UILabel, UIView;
@protocol IESLiveKTVControlActions;

@interface IESLiveKTVMixActionControlBar : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) IESLiveKTVBarButton *playButton;
@property (retain, nonatomic) UILabel *playButtonTitle;
@property (retain, nonatomic) IESLiveKTVBarButton *nextButton;
@property (retain, nonatomic) UILabel *nextButtonTitle;
@property (retain, nonatomic) UIButton *jumpToKTVButton;
@property (retain, nonatomic) UILabel *currentPlayTimeLabel;
@property (retain, nonatomic) UILabel *totalPlayTimeLabel;
@property (retain, nonatomic) IESLiveKTVControlStore *store;
@property (retain, nonatomic) RACDisposable *updatePlayTimeDisposol;
@property (retain, nonatomic) id<IESLiveKTVControlActions> actionsCreator;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ cutSongAction;
@property (copy, nonatomic) id /* block */ clickedBackAction;

- (void)p_addObserver;
- (void)p_setupUIs;
- (void)tr_clickedControlEvent:(id)a0;
- (void)updateSongPlayStatus;
- (void)playNextSong;
- (void)hidePlayControl:(BOOL)a0;
- (void)updatePlayTimeWithCurrentPlayTime:(long long)a0;
- (void)makeConstrain;
- (void)addUpdatePlayTimeSchedule;
- (void)clearUpdatePlayTimeSchedule;
- (id)timeFormatStringWithSecond:(long long)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)render;

@end
