@class NSString, UILabel, RichTextView, UIButton;

@interface MMLiveCancelReplayTipPanel : MMPageSheetBaseView <ILinkEventExt>

@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *tipTextView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResultBlock:(id /* block */)a0;
- (double)panelDetailViewMaxHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)onCancelButtonTapped:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
