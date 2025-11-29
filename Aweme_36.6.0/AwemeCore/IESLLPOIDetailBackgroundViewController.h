@class IESLLGradientView, UIColor, UIImageView, UIView, LLDitoPageContext;

@interface IESLLPOIDetailBackgroundViewController : UIViewController

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) IESLLGradientView *maskBGView;
@property (retain, nonatomic) UIColor *maskBGViewStartColor;
@property (retain, nonatomic) UIColor *maskBGViewEndColor;
@property (retain, nonatomic) IESLLGradientView *maskBGView2;
@property (retain, nonatomic) UIColor *maskBGView2StartColor;
@property (retain, nonatomic) UIColor *maskBGView2EndColor;
@property (retain, nonatomic) UIView *bgImageContainerView;
@property (nonatomic) double originBgImageContainerHeight;
@property (nonatomic) long long backgroundOption;
@property (retain, nonatomic) LLDitoPageContext *context;

- (void)iesll_rx_store:(id)a0 didSetWithModule:(id)a1;
- (void)hideMask;
- (id)poiDetail;
- (id)constData;
- (void)setDefaultImageToImageView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 fileName:(id)a2;
- (id)adjustImageSizeWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)layoutWithContent:(id)a0;
- (void)p_registerSubscribe;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (id)store;

@end
