@class UIButton, WCVideoProducerBaseSheetViewConfig, UIView;
@protocol WCVideoProducerBaseSheetViewDelegate;

@interface WCVideoProducerBaseSheetView : UIView

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) WCVideoProducerBaseSheetViewConfig *viewConfig;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<WCVideoProducerBaseSheetViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewConfig:(id)a1;
- (void)_loadViewConfig:(id)a0;
- (double)getContentHeight;
- (void)_onClickLeftButton;
- (void)_onClickRightButton;
- (void)_relayoutViews;
- (void)_initView;
- (void)_initContainerView;
- (void)_initTopBarView;
- (void)_initBottomView;
- (void)_initContentView;
- (void).cxx_destruct;

@end
