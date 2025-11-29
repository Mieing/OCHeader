@class WCFinderInvalidTipsInfo, NSString, UIImageView, UILabel, RichTextView, UIButton;
@protocol WCFinderInvalidTipsViewDelegate;

@interface WCFinderInvalidTipsView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descTextView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *complainButton;
@property (retain, nonatomic) WCFinderInvalidTipsInfo *invalidInfo;
@property (weak, nonatomic) id<WCFinderInvalidTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithInvalidInfo:(id)a0;
- (void)layoutUI;
- (void)onConfirmButtonClick;
- (void)onComplainButtonClick;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
