@class AWEAwemeModel;

@interface AWEPreviewVideoMaskPresenter : AWEUnPaidVideoMaskPresenter

@property (retain, nonatomic) AWEAwemeModel *currentModel;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (BOOL)shouldShowEffectiveView;
- (BOOL)shouldShowViewWithPeriod:(double)a0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void).cxx_destruct;

@end
