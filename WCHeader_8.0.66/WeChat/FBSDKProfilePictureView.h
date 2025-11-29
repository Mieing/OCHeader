@class NSString, UIImageView, FBSDKProfilePictureViewState;

@interface FBSDKProfilePictureView : UIView {
    BOOL _hasProfileImage;
    UIImageView *_imageView;
    FBSDKProfilePictureViewState *_lastState;
    BOOL _needsImageUpdate;
    BOOL _placeholderImageIsValid;
}

@property (nonatomic) unsigned long long pictureMode;
@property (copy, nonatomic) NSString *profileID;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)contentMode;
- (void)setContentMode:(long long)a0;
- (void)setMode:(unsigned long long)a0;
- (void)setNeedsImageUpdate;
- (void)_accessTokenDidChangeNotification:(id)a0;
- (void)_configureProfilePictureView;
- (BOOL)_imageShouldFit;
- (struct CGSize { double x0; double x1; })_imageSize:(BOOL)a0 scale:(double)a1;
- (void)_needsImageUpdate;
- (void)_setPlaceholderImage;
- (void)_updateImageWithData:(id)a0 state:(id)a1;
- (void).cxx_destruct;

@end
