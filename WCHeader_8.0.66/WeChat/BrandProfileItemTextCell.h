@class MMURLHandler, NSString, WAAppIdToUsernameTransfer, BrandProfileItemTextViewModel, MMUIButton, RichTextView;

@interface BrandProfileItemTextCell : BrandProfileItemBaseCell <ILinkEventExt>

@property (retain, nonatomic) BrandProfileItemTextViewModel *viewModel;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) MMUIButton *bottomButton;
@property (retain, nonatomic) WAAppIdToUsernameTransfer *appIdTransfer;
@property (retain, nonatomic) MMURLHandler *urlHandler;
@property (retain, nonatomic) RichTextView *mainTitleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)onWeAppLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
