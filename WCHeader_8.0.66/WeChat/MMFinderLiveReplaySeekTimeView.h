@class MMUILabel;

@interface MMFinderLiveReplaySeekTimeView : UIView

@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) MMUILabel *slashLabel;
@property (nonatomic) BOOL showHour;
@property (nonatomic) unsigned int currentTime;
@property (nonatomic) unsigned int totalTime;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initializeComponents;
- (id)createLabel;
- (void)updateCurrentTimeLabel;
- (void)updateTotalTimeLabel;
- (id)formattedStringOfTimeInSecond:(unsigned int)a0;
- (void).cxx_destruct;

@end
