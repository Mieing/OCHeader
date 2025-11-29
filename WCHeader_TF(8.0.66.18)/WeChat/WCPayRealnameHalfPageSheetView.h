@class NSString, UIImageView, RealnameHalfPageDialog, UILabel, UIView, RichTextView;

@interface WCPayRealnameHalfPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) RichTextView *descView;
@property (retain, nonatomic) RealnameHalfPageDialog *data;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)setupSubviews;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
