@class WNTextAttachment, NSString, CAShapeLayer, UIImageView, UIView, UITextField, FavFullScreenImageViewController;
@protocol WNAttachmentBaseViewDelegate;

@interface WNAttachmentBaseView : RTEAttachmentView <FavFullScreenImageViewControllerDelegate>

@property (weak, nonatomic) id<WNAttachmentBaseViewDelegate> wnDelegate;
@property (retain, nonatomic) WNTextAttachment *wnAttachment;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) UITextField *titleLabel;
@property (retain, nonatomic) UITextField *descLabel;
@property (weak, nonatomic) FavFullScreenImageViewController *favImageVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttachment:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutView;
- (void)layoutViewBorder;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutThumbImageView;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)flashBackgroundView;
- (void)openImageWithEdit:(BOOL)a0;
- (BOOL)ifLayoutViewByBase;
- (id)getTitle;
- (id)getDescription;
- (id)getImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageViewFrame;
- (id)getColorFromName:(id)a0;
- (id)getColorFromName:(id)a0 withTransparent:(BOOL)a1;
- (id)getColor:(id)a0 andReplaceColor:(id)a1;
- (void)didAddToSuperview;
- (id)getOriginImageViewWithSimpleImgInfo:(id)a0;
- (void)onFavFullScreenEditImageAt:(unsigned int)a0 withImage:(id)a1;
- (void)tryToDownloadVideoWith:(id)a0;
- (BOOL)isVideoNeedLazyDownload:(id)a0;
- (void).cxx_destruct;

@end
