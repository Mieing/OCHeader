@class UIButton, EmotionProgressView, MMUIActivityIndicatorView;
@protocol EmoticonStoreDownloadViewDelegate;

@interface EmoticonStoreDownloadView : UIView

@property (retain, nonatomic) UIButton *mainBtn;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) EmotionProgressView *progressView;
@property (retain, nonatomic) UIButton *downloadCancelBtn;
@property (nonatomic) BOOL isCurrentBtnGrayForWecoin;
@property (weak, nonatomic) id<EmoticonStoreDownloadViewDelegate> delegate;
@property (nonatomic) BOOL useStaticWidth;

+ (double)calBtnLengthFor:(long long)a0;

- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)loadSubView;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)changeBtnTo:(long long)a0;
- (void)genBtnFor:(long long)a0;
- (void)initDownloadProgressView;
- (void)initCancelButton;
- (void)prepareForStateUpdate;
- (void)changeLoadingStateTo:(BOOL)a0;
- (void)setPrice:(id)a0 isWeCoin:(BOOL)a1;
- (id)getPriceAttrStrWithPrice:(id)a0 isHighLighted:(BOOL)a1 standardFont:(id)a2;
- (void)updateViewForDownloadingWithProgress:(float)a0 andCancelBtn:(BOOL)a1;
- (void)onClickDownloadButton;
- (void)onClickButton;
- (void)onClickRewardButton;
- (void)onClickUseButton;
- (void)onUnstallButtonClick;
- (void)onCancelDownloadBtnClick;
- (void)onClickActivityDownloadButton;
- (void).cxx_destruct;

@end
