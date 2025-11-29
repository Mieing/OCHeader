@class WCFinderFilterTextView, WCFinderModTextSelectModel, NSString, UILabel, UIView, UIButton;
@protocol WCFinderModifyEditInputViewDelegate;

@interface WCFinderModifyEditInputView : MMUIView <UITextViewDelegate, WCFinderFilterTextViewDelegate>

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *modifyBtn;
@property (retain, nonatomic) UILabel *originLabel;
@property (retain, nonatomic) UIView *textViewBGView;
@property (retain, nonatomic) WCFinderFilterTextView *textView;
@property (retain, nonatomic) UILabel *countLimitLabel;
@property (retain, nonatomic) WCFinderModTextSelectModel *modifyModel;
@property (nonatomic) long long maxCount;
@property (weak, nonatomic) id<WCFinderModifyEditInputViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModifyModel:(id)a0 maxCount:(long long)a1;
- (void)layoutAllSubivews;
- (void)onClickCancelBtn;
- (void)onClickFinishAction;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textDidChangeFinish:(id)a0;
- (void)updateCountLimitLabel;
- (void).cxx_destruct;

@end
