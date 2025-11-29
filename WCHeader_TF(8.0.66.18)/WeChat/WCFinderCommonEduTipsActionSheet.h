@class MMUIButton, NSString, UIImageView, UIView, RichTextView, UIButton;
@protocol WCFinderCommonEduTipsActionSheetDelegate;

@interface WCFinderCommonEduTipsActionSheet : WCActionSheet <ILinkEventExt>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) RichTextView *descTextView;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (retain, nonatomic) RichTextView *ruleTextView;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) MMUIButton *acceptBtn;
@property (retain, nonatomic) MMUIButton *trailBtn;
@property (weak, nonatomic) id<WCFinderCommonEduTipsActionSheetDelegate> businessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)onCheckBoxClicked:(id)a0;
- (id)getEduTipsActionSheetConfig;
- (void)bindAcceptButton:(id)a0;
- (void)bindContainerView:(id)a0;
- (void)bindCancelButton:(id)a0;
- (void)onClickCancelBtn;
- (void)onClickAcceptBtn;
- (void)onClickCloseBtn;
- (void)onClickTrailBtn;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
