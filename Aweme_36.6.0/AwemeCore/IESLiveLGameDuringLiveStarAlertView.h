@class NSString, UIButton;
@protocol IESLiveLGameDuringLiveStarAlertViewDelegate;

@interface IESLiveLGameDuringLiveStarAlertView : UIView <UITextViewDelegate>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *starDescription;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveStarAlertViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickLinkText;
- (id)getTitle:(long long)a0;
- (void)onClickBlankArea;
- (struct CGSize { double x0; double x1; })getContainerSize:(long long)a0;
- (void)onClickContainer;
- (id)getDescription:(long long)a0;
- (long long)getDescriptionAlignment:(long long)a0;
- (id)setupLinkView:(long long)a0;
- (void)setupButton:(id)a0 type:(long long)a1;
- (void)onClickCheckBox:(id)a0;
- (struct CGSize { double x0; double x1; })calculateContentSize:(id)a0 viewWidth:(double)a1;
- (void)onClickActionButton;
- (void)onClickCancelButton;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)textViewDidChangeSelection:(id)a0;
- (void)setupUI;

@end
