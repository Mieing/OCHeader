@class UILabel;

@interface AWEListenFeedProgressIndicator : UIView

@property (retain, nonatomic) UILabel *chapterInfoLabel;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *remainTimeLabel;
@property (retain, nonatomic) UILabel *splitLine;

- (void)updateIndicatorWithChapterInfo:(id)a0 currentTime:(id)a1 remainTime:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
