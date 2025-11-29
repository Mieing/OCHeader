@class UIButton, WCPayWebImageView, UIImageView, NSString, UILabel, WCPayF2FReceiveModalViewData, UIView;
@protocol WCPayF2FReceiveModalViewDelegate;

@interface WCPayF2FReceiveModalView : UIView <WCPayWebImageViewDelegate>

@property (retain, nonatomic) WCPayF2FReceiveModalViewData *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *qrcodeImageView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIView *receviewContentView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) WCPayWebImageView *headImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *qrcodeImage;
@property (weak, nonatomic) id<WCPayF2FReceiveModalViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewData:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapCloseBtn;
- (void)onTapConfirmBtn;
- (id)getQrcodeImageView;
- (id)genQrCodeImage;
- (id)imageFromView:(id)a0;
- (void)showInView;
- (void)dissmissView;
- (void)handleTap:(id)a0;
- (id)headerImageWithPayIcon;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void).cxx_destruct;

@end
