@class UIView, MMWebImageView, NSString, UIImageView, CAGradientLayer, RichTextView, WCFinderAuthInfoIconView, UILabel;

@interface WCFinderShareCoverImageView : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) UIImageView *tinyIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMWebImageView *tailTagView;
@property (retain, nonatomic) UIView *photoDotsView;
@property (retain, nonatomic) MMWebImageView *maskImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) RichTextView *mediaTitleTextView;
@property (retain, nonatomic) UIImageView *liveGradientView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL blurEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithFinderShareItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)renderWithLiveShareItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)layoutImageWithURL:(id)a0 coverResourceIdentifier:(id)a1;
- (void)layoutAuthorInfoWithAuthIconURL:(id)a0 authIconType:(unsigned long long)a1 nickname:(id)a2 tailTagURL:(id)a3;
- (void)layoutPhotoDotsIfNeededWithFinderShareItem:(id)a0;
- (void)layoutTitle:(id)a0;
- (void)onLoadImageOK;
- (void)updateBlurEnabled;
- (void).cxx_destruct;

@end
