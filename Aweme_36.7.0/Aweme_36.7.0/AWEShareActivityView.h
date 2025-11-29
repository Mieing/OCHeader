@class UIView, UIImageView, AWEUIButton, AWEShareActivityModel, AWEShareActivityButton, AWEShareActivityQRCodeView, UIViewController, UILabel;
@protocol AWESimpleViewControllerProtocol, AWEShareActivityViewDelegate;

@interface AWEShareActivityView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEShareActivityQRCodeView *QRCodeView;
@property (retain, nonatomic) UIImageView *defaultImageView;
@property (retain, nonatomic) AWEShareActivityButton *shareButton;
@property (retain, nonatomic) AWEUIButton *sharePicButton;
@property (retain, nonatomic) AWEUIButton *closeButton;
@property (retain, nonatomic) AWEShareActivityModel *model;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL videoShare;
@property (weak, nonatomic) id<AWEShareActivityViewDelegate> delegate;
@property (retain, nonatomic) UIViewController<AWESimpleViewControllerProtocol> *videoPlayer;

- (void)shareAction;
- (void)imageSavedToPhotosAlbum:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)registerImageDownloadBlock;
- (void)showDefaultFailView;
- (id)platformIcon;
- (id)stretchImage;
- (id)backgroundImage:(BOOL)a0;
- (void)downloadQRCodeImage;
- (void)shareVideoAction;
- (void)updateShareButtonWithProcess:(double)a0;
- (void)configVideoPlayerWithModel:(id)a0;
- (void)finishLoadSuccess:(BOOL)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)closeAction;
- (void)setupUI;

@end
