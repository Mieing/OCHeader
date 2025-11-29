@class NSString, WAContact, MMUIView, UIView, RichTextView, UIButton;

@interface WAProfileFooterView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIView *footerViewBackground;
@property (retain, nonatomic) UIView *footerViewContainer;
@property (retain, nonatomic) RichTextView *aboutOriginalView;
@property (retain, nonatomic) RichTextView *teenagerProtectView;
@property (retain, nonatomic) MMUIView *buttonSplitView;
@property (retain, nonatomic) UIButton *bottomFeedBackButton;
@property (retain, nonatomic) WAContact *contact;
@property (nonatomic) BOOL needBottomFeedbackButton;
@property (copy, nonatomic) id /* block */ eventAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onBottomFeedBack;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void).cxx_destruct;

@end
