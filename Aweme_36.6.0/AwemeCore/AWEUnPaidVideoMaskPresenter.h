@class NSString, NSDictionary, AWEAwemeModel, AWEPreviewVideoMaskView;

@interface AWEUnPaidVideoMaskPresenter : AWEVideoPaymentBasePresenter

@property (weak, nonatomic) AWEPreviewVideoMaskView *maskView;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (void)updateCoverImage;
- (void)configDetailView;
- (BOOL)shouldShowEffectiveView;
- (BOOL)shouldShowViewWithPeriod:(double)a0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (void)updateMaskViewOffsetYForPad;
- (void)updateMaskViewOffsetY;
- (id)imageURLArray;
- (id)initWithView:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3 context:(id)a4;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void)updateCoverImageWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)reportMaskViewShow;
- (void).cxx_destruct;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)willDisplay;

@end
