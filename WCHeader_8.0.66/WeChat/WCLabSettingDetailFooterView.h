@class UIButton;
@protocol WCLabSettingDetailFooterViewDelegate;

@interface WCLabSettingDetailFooterView : UIView {
    UIButton *_exposeButton;
}

@property (weak, nonatomic) id<WCLabSettingDetailFooterViewDelegate> delegate;

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onClickExposeButton:(id)a0;
- (void)initExposeButton;
- (void).cxx_destruct;

@end
