@class WCAdFinderDialogBaseInfo, WCAdURLImageView, UIButton, MMUILabel;
@protocol WCAdFinderDialogBaseViewDelegate;

@interface WCAdFinderDialogBaseView : MMUIView

@property (retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) id<WCAdFinderDialogBaseViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dialogInfo:(id)a1;
- (void)generateViews;
- (void)layoutSubviews;
- (void)onConfirmButtonClicked:(id)a0;
- (void)doConfirmButtonClick;
- (void).cxx_destruct;

@end
