@class LOTAnimationView, AWEAwemeModel, UILabel, UIView;

@interface AWESearchVisionFeedPauseModalComponent : AWEFeedPauseModalBaseComponent

@property (retain, nonatomic) UIView *entranceView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) LOTAnimationView *backgroundLottieView;

- (unsigned long long)pauseModalBizType;
- (void)didShowComponentWithModel:(id)a0;
- (id)trackerParamsForFeedPauseButtonShow:(id)a0;
- (id)trackerParamsForFeedPauseButtonClick:(id)a0;
- (id)takeScreenshotWithScale:(double)a0;
- (void)setupEntranceView;
- (id)pauseContentWithModel:(id)a0;
- (id)updateViewWithModel:(id)a0;
- (void)clickEntranceView;
- (id)getLabelShowText;
- (void)trackEntranceViewClick;
- (id)getBtm;
- (void).cxx_destruct;
- (void)updateLabelText;

@end
