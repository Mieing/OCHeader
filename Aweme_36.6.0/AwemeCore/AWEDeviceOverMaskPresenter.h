@class AWEPreviewVideoMaskView, AWEAwemeModel;

@interface AWEDeviceOverMaskPresenter : AWEUnPaidVideoMaskPresenter

@property (weak, nonatomic) AWEPreviewVideoMaskView *maskView;
@property (retain, nonatomic) AWEAwemeModel *currentModel;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (void)configDetailView;
- (BOOL)shouldShowEffectiveView;
- (id)initWithView:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3;
- (BOOL)shouldShowViewWithPeriod:(double)a0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldDisableProgress;
- (BOOL)shouldCheckViewStatus;
- (void).cxx_destruct;

@end
