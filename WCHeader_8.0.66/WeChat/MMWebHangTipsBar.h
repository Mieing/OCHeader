@class SightIconView, UIView, MMUIButton, MMUILabel;
@protocol MMWebHangTipsBarDelegate;

@interface MMWebHangTipsBar : UIView

@property (retain, nonatomic) UIView *buttonBgView;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) MMUILabel *transLabel;
@property (retain, nonatomic) MMUIButton *linkBtn;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) SightIconView *loadView;
@property (weak, nonatomic) id<MMWebHangTipsBarDelegate> delegate;

- (void)willRemoveSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubView;
- (void)layoutSubviews;
- (void)setTransTipsText:(id)a0 andHideLoad:(BOOL)a1;
- (void)setSepLineShow:(BOOL)a0;
- (void)onClickLinkBtn:(id)a0;
- (void)onClickCloseBtn:(id)a0;
- (void).cxx_destruct;

@end
