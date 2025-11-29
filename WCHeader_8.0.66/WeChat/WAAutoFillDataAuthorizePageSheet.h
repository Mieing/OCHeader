@class NSString, _WAAutoFillDataTextView, UILabel, UIButton;
@protocol WAAutoFillDataAuthorizePageSheetDelegate;

@interface WAAutoFillDataAuthorizePageSheet : WAPageSheet <UITextViewDelegate>

@property (copy, nonatomic) NSString *contentString;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) _WAAutoFillDataTextView *textView;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (weak, nonatomic) id<WAAutoFillDataAuthorizePageSheetDelegate> afda_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentString:(id)a0;
- (double)contentHeight;
- (void)addAllSubviews;
- (double)calculateHeightForTextView;
- (void)layoutSubViews;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)onRejectBtnClick:(id)a0;
- (void)onAcceptBtnClick:(id)a0;
- (void).cxx_destruct;

@end
