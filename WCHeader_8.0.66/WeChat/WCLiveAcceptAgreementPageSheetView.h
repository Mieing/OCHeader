@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface WCLiveAcceptAgreementPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 message:(id)a1 iconImage:(id)a2 confirmCallback:(id /* block */)a3;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
