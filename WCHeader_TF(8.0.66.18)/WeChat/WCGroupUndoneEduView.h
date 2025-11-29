@class MMUILabel, NSString, UIImageView, MMPageSheetAdapter, CMessageWrap, MMUIButton, UIButton;
@protocol WCGroupUndoneEduViewDelegate;

@interface WCGroupUndoneEduView : UIView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIImageView *contentBg;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMPageSheetAdapter *adapter;
@property (weak, nonatomic) id<WCGroupUndoneEduViewDelegate> undoneDelegate;
@property (retain, nonatomic) CMessageWrap *relatedMessage;
@property (nonatomic) BOOL bShowCloseButton;
@property (nonatomic) BOOL bPageSheetStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)showInPageSheet;
- (void)onClose:(id)a0;
- (void)onConfirm:(id)a0;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
