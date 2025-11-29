@class UIButton, NSString;

@interface CSJBaseLoadingPageView : UIView <CSJLoadingPageProtocol>

@property (retain, nonatomic) UIButton *adButton;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_adBtnClick;
- (id /* block */)adButtonClickBlock;
- (void)setAdButtonClickBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
