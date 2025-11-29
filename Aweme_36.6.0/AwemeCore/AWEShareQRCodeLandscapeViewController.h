@class UIView, AWEShareContext, NSArray, NSString, AWEShareQRCodeLandscapeContentView, AWEGradientView, AWEUILoadingView, AWEShareLandscapePanelView, UILabel;

@interface AWEShareQRCodeLandscapeViewController : UIViewController <AWEShareQRCodeLandscapeContentViewDelegate, AWEShareLandscapePanelViewDelegate>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEShareQRCodeLandscapeContentView *contentView;
@property (retain, nonatomic) AWEShareLandscapePanelView *gridView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEGradientView *gradientMaskView;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSArray *firstItems;
@property (retain, nonatomic) NSString *shareType;
@property (nonatomic) BOOL preparingShare;
@property (nonatomic) BOOL firstAppear;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShareContext:(id)a0;
- (void)imageSavedToPhotosAlbum:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (id)saveSuccessfullyMessageForShareType:(id)a0;
- (void)onImageSaveSuccessfully;
- (void)shareItemTapped:(id)a0;
- (void)fetchQRCodeImage;
- (void)trackQRCodeSave;
- (void)finishLoadQRCodeImageSuccess:(BOOL)a0;
- (void)finishLoadCoverImageSuccess:(BOOL)a0;
- (void)configShareItems;
- (void)showSharePanel;
- (void)dismiss;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
