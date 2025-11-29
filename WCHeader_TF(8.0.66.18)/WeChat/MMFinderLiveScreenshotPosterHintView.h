@class UILabel, MMFinderLiveScreenshotPosterLogic;
@protocol MMFinderLiveScreenshotPosterHintViewDelegate;

@interface MMFinderLiveScreenshotPosterHintView : UIView

@property (retain, nonatomic) MMFinderLiveScreenshotPosterLogic *screenshotPosterLogic;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<MMFinderLiveScreenshotPosterHintViewDelegate> delegate;

- (id)initWithScreenshotPosterLogic:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onTapped;
- (void).cxx_destruct;

@end
