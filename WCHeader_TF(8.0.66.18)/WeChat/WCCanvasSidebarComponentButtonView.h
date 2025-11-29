@class WCAdURLTintColorImageView, WCCanvasClickEventManager, UIColor, WCCanvasComponentSidebarButtonInfo, UILabel, NSString, UIButton;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasSidebarComponentButtonView : UIView <WCCanvasClickEventManagerDelegate>

@property (retain, nonatomic) WCAdURLTintColorImageView *iconView;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) WCCanvasClickEventManager *clickManager;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) WCCanvasComponentSidebarButtonInfo *buttonInfo;
@property (weak, nonatomic) id<WCCanvasComponentDelegate> canvasDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textColor:(id)a1 buttonInfo:(id)a2 canvasDelegate:(id)a3;
- (void)initViews;
- (void)layoutSubviews;
- (void)onActionButtonClicked;
- (void)buttonWillAppearInMainScreen;
- (void)buttonWillDisappearInMainScreen;
- (void)buttonReportAddExposureCount;
- (id)reportMgr;
- (void).cxx_destruct;

@end
