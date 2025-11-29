@class MMWebImageView, NSString, UITextField, UIImage, UILabel, UIView, UIButton;

@interface ShareToGoodLookComfirmView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) UIView *detailBackgroundView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UITextField *thoughtsTextField;
@property (retain, nonatomic) UIView *horizationLineView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UIView *textFieldUnderLineView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMWebImageView *thumbImageView;
@property (nonatomic) double currentKeyboardOffset;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ sendBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *editPlaceHolder;
@property (retain, nonatomic) UIImage *thumbImage;
@property (copy, nonatomic) NSString *thumbImageURL;
@property (weak, nonatomic) UIView *curMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 detailText:(id)a1 editPlaceHodler:(id)a2 thumbImage:(id)a3 thumbImageURL:(id)a4 sendBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initSubviews;
- (double)viewHeight;
- (void)layoutSubviews;
- (void)insertTips:(id)a0;
- (void)showInView:(id)a0;
- (void)showInView:(id)a0 withTips:(id)a1;
- (void)deviceOrientationDidChange:(id)a0;
- (void)tapOutsideKeyboard;
- (void)handleKeyboardWillShow:(id)a0;
- (void)handleKeyboardWillHide:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onHandleSendButtonClicked:(id)a0;
- (void)onHandleCancelButtonClicked:(id)a0;
- (BOOL)shouldShowCoverView;
- (double)adaptedViewWidthIn:(id)a0;
- (void).cxx_destruct;

@end
