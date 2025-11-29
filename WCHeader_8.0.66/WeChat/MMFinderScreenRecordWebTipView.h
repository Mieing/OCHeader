@class MMWebViewController, NSString, UIView;

@interface MMFinderScreenRecordWebTipView : MMPageSheetBaseView <MMWebViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMWebViewController *webViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initWebView;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (void).cxx_destruct;

@end
