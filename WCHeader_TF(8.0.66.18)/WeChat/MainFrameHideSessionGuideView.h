@class UILabel, RichTextView, NSString;

@interface MainFrameHideSessionGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
