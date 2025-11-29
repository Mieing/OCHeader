@class UIButton, UILabel, NSString;

@interface AWETextTemplateErrorView : AWETextTemplateOverlayView <AWETextTemplateStickerErrorViewProtocol>

@property (retain, nonatomic) UIButton *reloadButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ reloadHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReload;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
