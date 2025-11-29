@class MMFinderLiveWebPageSheetParams, NSString, MMWebViewController, UIView, MMUIButton;

@interface MMFinderLivePromoteWebPanel : MMPageSheetBaseView <MMWebViewPresetUIChildViewDelegate>

@property (retain, nonatomic) NSString *adapterUrl;
@property (retain, nonatomic) MMWebViewController *webVC;
@property (retain, nonatomic) MMFinderLiveWebPageSheetParams *params;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePromoteWebPanelWithUrl:(id)a0 contentViewHeight:(double)a1;
- (id)parentNavigationItemWithWebview:(id)a0;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (void).cxx_destruct;

@end
