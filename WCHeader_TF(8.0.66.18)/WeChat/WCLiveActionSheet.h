@class NSString, RichTextView;

@interface WCLiveActionSheet : WCActionSheet <ILinkEventExt>

@property (retain, nonatomic) RichTextView *richTitleLabel;
@property (copy, nonatomic) NSString *richTitle;
@property (retain, nonatomic) id extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getActionSheetWidth;

- (long long)actionSheetWidth;
- (double)containerViewOriginXInIphone;
- (id)containerViewBackgroundColor;
- (id)titleViewBackgroundColor;
- (id)sepBarBackgroundColor;
- (id)seperateLineBackgroundColor;
- (id)titleLabelTextColor;
- (id)buttonBackgroundColor;
- (id)buttonHighlightedBackgroundColor;
- (id)defaultButtonTitleColor;
- (id)cancelButtonTitleColor;
- (id)getCustomHeadView;
- (void)showInView:(id)a0;
- (void)onDismissCompletelyWithClickedButtonIndex:(long long)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void).cxx_destruct;

@end
