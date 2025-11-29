@class IESLiveButton, IESLivePartyKTVChorusButton, UILabel, UIView;
@protocol IESLivePartyKTVDelegate;

@interface IESLivePartyKTVControlBar : UIView

@property (retain, nonatomic) IESLivePartyKTVChorusButton *chorusButton;
@property (retain, nonatomic) IESLiveButton *addSongButton;
@property (retain, nonatomic) UILabel *addSongLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) IESLiveButton *tuningButton;
@property (retain, nonatomic) IESLiveButton *micButton;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL shouldShowRedDot;
@property (nonatomic) unsigned long long roleType;
@property (weak, nonatomic) id<IESLivePartyKTVDelegate> delegate;
@property (nonatomic) double lastClickChorusTime;

- (void)updateMuteState:(BOOL)a0;
- (void)updateOrderCount:(long long)a0;
- (void)updateChorusRoleType:(unsigned long long)a0;
- (void)updateRedDotHidden:(BOOL)a0;
- (void)updateKTVState:(unsigned long long)a0;
- (void)didClickChorusButton;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setupView;
- (void)updateProgress:(float)a0;

@end
