@class UIView, MMUIButton, MMUIViewController, NSString, MMGrowTextView, UIButton, MMUILabel, WCInputController, UIScrollView;
@protocol MPShareWowEditViewDelegate;

@interface MPShareWowEditView : UIView <MMGrowTextViewDelegate, InputControllerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) UIView *navBarView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) UIButton *commitBtn;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) MMGrowTextView *textView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (nonatomic) double contentOffsetYWhenBeginDragging;
@property (nonatomic) double textViewAjustHeight;
@property (retain, nonatomic) WCInputController *inputController;
@property (nonatomic) unsigned int theme;
@property (nonatomic) double defaultHeight;
@property (weak, nonatomic) id<MPShareWowEditViewDelegate> delegate;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (void)setHiddenWithAnimation:(BOOL)a0;
- (void)updateHeightWhenKeyboardShowWithAnimated:(BOOL)a0;
- (void)beginEdit;
- (void)endEdit;
- (void)initSubviews;
- (void)initBgMaskView;
- (void)onTapCommentEditMaskView;
- (void)initNavBarView;
- (void)initScrollView;
- (void)initTextView;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)initInputController;
- (void)layoutSubviews;
- (void)textDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didCommitText:(id)a0;
- (double)getVisibleHeight;
- (void)clearTextView;
- (void)keyboardWillShow;
- (void)onClickCommitBtn;
- (void)onClickCloseBtn;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
