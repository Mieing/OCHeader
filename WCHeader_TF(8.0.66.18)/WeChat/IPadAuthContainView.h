@class MMUIActivityIndicatorView, UIImageView, UILabel, UIView, MMUIButton;
@protocol IPadAuthContainViewDelegate;

@interface IPadAuthContainView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *qrcodeImgView;
@property (retain, nonatomic) UILabel *appNameLabel;
@property (retain, nonatomic) UIView *dividingLine;
@property (retain, nonatomic) UILabel *tailLabel;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIView *scannedMaskView;
@property (retain, nonatomic) UIImageView *scannedTipsIconView;
@property (retain, nonatomic) UIView *refreshMaskView;
@property (retain, nonatomic) UIImageView *refreshIconView;
@property (retain, nonatomic) UILabel *refreshTipsLabel;
@property (nonatomic) double limitWidth;
@property (weak, nonatomic) id<IPadAuthContainViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)onQRCodeScanned;
- (void)onQRCodeExpired;
- (void)startLoading;
- (void)stopLoading;
- (void)updateWithQRCodeData:(id)a0 appName:(id)a1;
- (void)layoutSubviews;
- (void)onCancelBtnClicked;
- (void)onTapRefreshMaskView;
- (void).cxx_destruct;

@end
