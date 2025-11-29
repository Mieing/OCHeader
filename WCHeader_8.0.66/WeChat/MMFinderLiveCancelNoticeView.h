@class NSString, CAShapeLayer, MMGrowTextView, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveCancelNoticeView : MMPageSheetBaseView <MMGrowTextViewDelegate, UITextViewDelegate>

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UIView *pubbleInputView;
@property (retain, nonatomic) MMGrowTextView *growTextView;
@property (retain, nonatomic) MMUILabel *wordCountTips;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) double keyboardHeight;
@property (copy, nonatomic) id /* block */ liveCancelNoticeViewBlock;
@property (nonatomic) BOOL isPaidNotice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)liveCancelNoticeViewCancelClick;
- (void)liveCancelNoticeViewActionClick;
- (void)liveCancelNoticeViewClick:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)TextViewHeightDidChanged:(id)a0;
- (void)keyboardWillShow:(double)a0;
- (void)keyboardWillHide:(BOOL)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)fixTopicText:(BOOL)a0;
- (id)stringByRemovingReturnLineInString:(id)a0;
- (id)stringByRemovingLastEmptyLineInString:(id)a0;
- (id)stringByRemovingOverflowedLinesInString:(id)a0 limitedLineCount:(unsigned long long)a1;
- (void)updateDetailViewFrameAnimated:(BOOL)a0;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (double)getContentHeight;
- (void)setupPageSheetConfig;
- (void).cxx_destruct;

@end
