@class NSData, NSString, MMUIActivityIndicatorView, UIImageView, UILabel, MMWebImageView, UIButton;
@protocol WASendSessionMsgViewDelegate;

@interface WASendSessionMsgView : UIView <MMWebImageViewDelegate> {
    UILabel *_titleLabel;
    MMWebImageView *_imageView;
    MMUIActivityIndicatorView *_imageIndicatorView;
    UIImageView *_backgroundImageView;
    UIButton *_coverButton;
    NSString *_imageURL;
    NSData *_imageData;
}

@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<WASendSessionMsgViewDelegate> viewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImageURL:(id)a0 imageData:(id)a1;
- (void)updateImageURL:(id)a0 imageData:(id)a1 hintTitle:(id)a2;
- (id)getLoadedImageData;
- (void)initView;
- (void)initBackgroundImage;
- (void)initTitleLabel;
- (void)initImageView;
- (void)initCoverButton;
- (id)getHighlightImageWithImageViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onClickCoverButton;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
