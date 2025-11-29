@class AWEUILoadingView, AWEShareActivityPicElementModel, UIImageView, AWEShareActivityPicModel, UIView, UILabel, UIImage;

@interface AWEShareActivityQRCodeView : UIView

@property (retain, nonatomic) AWEShareActivityPicModel *picModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundPicImageView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIView *avatarBackgroudeView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *idleImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImage *logoImage;
@property (retain, nonatomic) UIImage *backgroundPicImage;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) UIImage *QRCodeImage;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEShareActivityPicElementModel *showElement;
@property (retain, nonatomic) AWEShareActivityPicElementModel *saveElement;
@property (copy, nonatomic) id /* block */ finishDownloadBlock;

- (void)dismissLoadingView;
- (id)imageToSaveToAlbum;
- (void)notifyImageHasDownload;
- (id)initWithPicModel:(id)a0;
- (void).cxx_destruct;
- (void)loadImage;
- (void)setupUI;
- (void)showLoadingView;

@end
