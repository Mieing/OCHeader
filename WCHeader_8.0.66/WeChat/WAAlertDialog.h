@class UIView, NSString, UIImageView, UIButton, UITextView, WABackgroundRootButton, MMUILabel, UIColor;
@protocol WAAlertDialogDelegate;

@interface WAAlertDialog : MMObject <UITextViewDelegate> {
    UIView *_contentView;
    UIImageView *_contentBg;
    MMUILabel *_tipsTitleLabel;
    UITextView *_tipsContentLabel;
    UITextView *_tipsPlaceHolderLabel;
}

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *alignView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (weak, nonatomic) id<WAAlertDialogDelegate> delegate;
@property (readonly, nonatomic) WABackgroundRootButton *backgroundRoot;
@property (retain, nonatomic) NSString *curInputText;
@property (nonatomic) long long dialogId;
@property (retain, nonatomic) NSString *contentText;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *placeHolderText;
@property (retain, nonatomic) NSString *confirmText;
@property (retain, nonatomic) NSString *cancelText;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL isUpper;
@property (retain, nonatomic) UIColor *confirmColor;
@property (retain, nonatomic) UIColor *cancelColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0;
- (id)initWithWebView:(id)a0 alignView:(id)a1;
- (void)dealloc;
- (void)buildDialog;
- (id)bulidNSAttributedStringText:(id)a0 onlyTitle:(BOOL)a1 onlyContent:(BOOL)a2;
- (void)updateSubViewsFrame;
- (void)orientationDidChange;
- (void)onTapBackground;
- (void)onClickBtn:(id)a0;
- (void)hide;
- (void)fadeIn:(double)a0;
- (void)bringToFront;
- (id)getInputText;
- (id)getTitleText;
- (id)getContentText;
- (void)textViewDidChange:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;

@end
