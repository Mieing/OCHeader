@class NSString, UIView, MMUIButton, RichTextView;
@protocol WCFinderTitleDescButtonActionSheetDelegate;

@interface WCFinderTitleDescButtonActionSheet : WCActionSheet <ILinkEventExt>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) RichTextView *ruleTextView;
@property (retain, nonatomic) MMUIButton *acceptBtn;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (weak, nonatomic) id<WCFinderTitleDescButtonActionSheetDelegate> businessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTitleDescButtonActionSheetConfig;
- (id)getTipsActionSheetView;
- (void)onClickAcceptBtn;
- (void)onClickCancelBtn;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
