@class UILongPressGestureRecognizer, AWEMusicStreamingShadowView, UIImageView, UIView, BDImageView;
@protocol AWEMusicPlayerCoverViewDelegate;

@interface AWEMusicPlayerCoverView : UIView

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *defaultContainer;
@property (retain, nonatomic) AWEMusicStreamingShadowView *shadowView;
@property (retain, nonatomic) UIImageView *defaultImageView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGestrue;
@property (copy, nonatomic) id /* block */ workItem;
@property (weak, nonatomic) id<AWEMusicPlayerCoverViewDelegate> delegate;

- (void)updateCoverImageUrl:(id)a0;
- (void)showDefault;
- (void)longTapped:(id)a0;
- (void)showSuccess;
- (void)trackWebCoverImageDownloadStatus:(id)a0;
- (void).cxx_destruct;
- (void)cancelBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)showError;

@end
