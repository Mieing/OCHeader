@class NSString, NSDictionary, AWEAwemeModel, AWEPreviewVideoMaskView;

@interface AWEEntertainmentPlayletVIPVideoMaskPresenter : AWEVideoPaymentBasePresenter

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
- (void).cxx_destruct;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)willDisplay;

@end
