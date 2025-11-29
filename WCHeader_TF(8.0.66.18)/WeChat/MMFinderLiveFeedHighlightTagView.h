@class MMLiveColorfulLabel, FinderLiveCardHighlightTag, NSString, MMWebImageView, UIView, MMFinderLiveFeedHighlightTagBackgroundGradientView;

@interface MMFinderLiveFeedHighlightTagView : UIView <MMWebImageViewDelegate>

@property (nonatomic) struct CGSize { double width; double height; } loadImgSize;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) MMWebImageView *bgImgView;
@property (retain, nonatomic) MMWebImageView *iconImgView;
@property (retain, nonatomic) MMLiveColorfulLabel *textLabel;
@property (retain, nonatomic) FinderLiveCardHighlightTag *highlightTag;
@property (retain, nonatomic) MMFinderLiveFeedHighlightTagBackgroundGradientView *bgGradientView;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)widthToFit:(double)a0;
- (void)initViews;
- (void)updateWithHighlightTag:(id)a0;
- (BOOL)useImgMode;
- (BOOL)showIcon;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
