@class NFCCardTipsModalViewData, MMUIActivityIndicatorView, UIImageView, UIView, UILabel, UIButton;

@interface WCPayNFCCardTipsModal : UIView

@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) NFCCardTipsModalViewData *viewData;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *doneButton;
@property (copy, nonatomic) id /* block */ onDoneBlk;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) double originHeight;
@property (readonly, nonatomic) BOOL isShowing;

- (void)setOnDoneCallBack:(id /* block */)a0;
- (id)initWithData:(id)a0;
- (void)updateViewWithData:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateBackgroundView;
- (id)getStatusImage:(id)a0;
- (void)updateContentView;
- (void)onClickConfirmButton:(id)a0;
- (void)showInView:(id)a0;
- (void)dissmiss;
- (void).cxx_destruct;

@end
