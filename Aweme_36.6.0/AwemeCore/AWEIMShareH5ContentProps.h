@class AWEIMUILabelPresenterProps, AWEIMUIBlurViewPresenterProps, AWEIMUIGradientViewProps, AWEIMSmallCardProps, AWEIMUIImageViewPresenterProps;

@interface AWEIMShareH5ContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMSmallCardProps *smallCardProps;
@property (retain, nonatomic) AWEIMUIImageViewPresenterProps *bgImageProps;
@property (retain, nonatomic) AWEIMUIGradientViewProps *gradientProps;
@property (retain, nonatomic) AWEIMUIBlurViewPresenterProps *blurViewProps;
@property (retain, nonatomic) AWEIMUILabelPresenterProps *tagLabelProps;

- (void).cxx_destruct;

@end
