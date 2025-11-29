@class NSString, EcsFinderFeedPopupView, MMWebImageView, MMUIButton, EcsFinderFeedSingleProductNavBar;

@interface EcsFinderFeedSingleProductHeaderView : EcsFinderFeedSingleProductBaseView <MMWebImageViewDelegate>

@property (retain, nonatomic) EcsFinderFeedSingleProductNavBar *navBar;
@property (retain, nonatomic) MMWebImageView *productImageView;
@property (retain, nonatomic) MMUIButton *feedbackButton;
@property (retain, nonatomic) EcsFinderFeedPopupView *popupView;
@property (copy, nonatomic) id /* block */ onClickFeedbackButton;
@property (copy, nonatomic) id /* block */ onClickProductImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataVM:(id)a0;
- (void)setupUI;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (id)themeColorForImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
