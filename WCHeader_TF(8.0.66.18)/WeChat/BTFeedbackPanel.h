@class MMUIImageView, NSString, UIButton, MMUIView, NSMutableArray, BTFeedbackPanelInitParams, BTFeedbackPanelCoordinateParams, MMUILabel;
@protocol BTFeedbackPanelDelegate;

@interface BTFeedbackPanel : MMUIWindow <MMUIViewControllerExt> {
    BTFeedbackPanelInitParams *m_initParams;
    BTFeedbackPanelCoordinateParams *m_coordinateParams;
    MMUIView *m_backgroundView;
    MMUIImageView *m_indicatorView;
    MMUIView *m_pannelView;
    MMUIView *m_reasonBtnContainerView;
    MMUILabel *m_titleView;
    UIButton *m_confirmBtn;
    NSMutableArray *m_reasonBtnArr;
    NSMutableArray *m_selectedBtnArr;
}

@property (weak, nonatomic) id<BTFeedbackPanelDelegate> panelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInitParams:(id)a0 coordinateParams:(id)a1;
- (void)checkAndSetInitParams:(id)a0;
- (void)checkAndSetCoordinateParams:(id)a0;
- (void)initView;
- (void)addCornersToPannelView;
- (void)initReasonBtns;
- (id)genReasonBtnWithReason:(id)a0;
- (void)MMUIViewControllerWillAppear:(id)a0;
- (void)layoutSubviews;
- (void)layoutPanelView;
- (void)onTapBackground;
- (void)onClickReasonBtn:(id)a0;
- (void)onClickConfirmBtn;
- (void)didClose;
- (void)show;
- (void)hide;
- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;

@end
