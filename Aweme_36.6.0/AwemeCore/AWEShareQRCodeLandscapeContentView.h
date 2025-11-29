@class AWEQRCodeLandscapeShareGuideView, UIImageView, UIImage, UILabel, UIView, AWEShareContext;
@protocol AWEShareQRCodeLandscapeContentViewDelegate;

@interface AWEShareQRCodeLandscapeContentView : UIView

@property (retain, nonatomic) UIImageView *douImageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverBackgroundView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *QRCodeImageView;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *QRCodeImage;
@property (retain, nonatomic) AWEQRCodeLandscapeShareGuideView *shareGuideView;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (nonatomic) BOOL isCoverLoaded;
@property (nonatomic) BOOL isQRCodeLoaded;
@property (nonatomic) BOOL finishLoad;
@property (weak, nonatomic) id<AWEShareQRCodeLandscapeContentViewDelegate> delegate;

- (id)imageToSaveToAlbum;
- (id)initWithShareContext:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void)loadCoverImage;
- (void)loadQRCodeImageWithUrlList:(id)a0;
- (void)loadQRCodeImage:(id)a0;
- (void).cxx_destruct;
- (void)setUpSubviews;

@end
