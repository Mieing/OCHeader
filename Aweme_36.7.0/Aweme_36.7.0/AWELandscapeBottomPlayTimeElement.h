@class UILabel, UIView;

@interface AWELandscapeBottomPlayTimeElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIView *timeContainer;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *lineLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (nonatomic) double totalTime;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
