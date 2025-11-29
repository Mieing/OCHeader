@class UIView, NSString, UIImage, MMFinderLiveScreenshotPosterInfo, NSMutableDictionary, UIImageView, WCFinderAuthInfoIconView, UILabel;

@interface MMFinderLiveScreenshotPosterView : UIView <MMLivePosterViewProviding>

@property (retain, nonatomic) MMFinderLiveScreenshotPosterInfo *posterInfo;
@property (retain, nonatomic) UIView *masterContainerView;
@property (retain, nonatomic) UIView *roundedCornerContainerView;
@property (retain, nonatomic) UIView *screenshotImageContainerView;
@property (retain, nonatomic) UIView *screenshotImageStackingView;
@property (retain, nonatomic) UIImageView *screenshotImageView;
@property (retain, nonatomic) NSMutableDictionary *associatedImagesViews;
@property (retain, nonatomic) UIImageView *brandLogoImageView;
@property (retain, nonatomic) UIImageView *sponsorLogoImageView;
@property (retain, nonatomic) UIImageView *artistSignatureImageView;
@property (retain, nonatomic) UIImageView *holderAvatarView;
@property (retain, nonatomic) UILabel *holderLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *anchorVerificationStatusView;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (readonly, nonatomic) UIImage *snapshotImage;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithScreenshotPosterInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)updateForPosterScreenshot;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initializeComponents;
- (struct CGSize { double x0; double x1; })masterContainerViewSize;
- (struct CGSize { double x0; double x1; })screenshotImageContainerViewSize;
- (void)updateAssociatedImageViewsWithAssociatedImages:(id)a0;
- (void)layoutAssociatedImageViewsWithAssociatedImages:(id)a0;
- (void)updatePrimaryImageViewMaskingWithMaskingDescriptors:(id)a0;
- (void).cxx_destruct;

@end
