@class WCPayNumberTipsModalViewData, UILabel, UIView, UIButton;
@protocol WCPayNumberTipsModalDelegate;

@interface WCPayNumberTipsModal : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) WCPayNumberTipsModalViewData *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *upLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *btnsContentView;
@property (weak, nonatomic) id<WCPayNumberTipsModalDelegate> delegate;

- (id)initWithViewData:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapCancelBtn;
- (void)onTapConfirmBtn;
- (void)showInView;
- (void)handleTap:(id)a0;
- (void)dissmissView;
- (void).cxx_destruct;

@end
