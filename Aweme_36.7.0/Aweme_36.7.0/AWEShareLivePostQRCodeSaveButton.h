@class UIImageView, UILabel;

@interface AWEShareLivePostQRCodeSaveButton : UIButton

@property (retain, nonatomic) UIImageView *downloadImageView;
@property (retain, nonatomic) UILabel *downloadLabel;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoaded;

- (void)setupAsSaveButton;
- (void)setupAsRetry;
- (void)updateButtonUIWithDowloadSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
