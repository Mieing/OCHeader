@class UIImageView, IESLiveGiftPanelNonClipViewContainer, _TtC18IESLiveRevenueImpl31IESLiveRebornGiftPanelViewModel;
@protocol IESLiveGiftPanelViewModelProtocol;

@interface IESLiveRevenueImpl.IESLiveRebornGiftPanelView : UIView <IESLiveGiftPanelViewProtocol, UIGestureRecognizerDelegate, IESLiveAutoRotateAction> {
    void /* unknown type, empty encoding */ edc;
    void /* unknown type, empty encoding */ containerModel;
    void /* unknown type, empty encoding */ viewBuilder;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_middleContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_safeAreaView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nonClipViewContainer;
    void /* unknown type, empty encoding */ setting;
    void /* unknown type, empty encoding */ smallGiftOffset;
    void /* unknown type, empty encoding */ aboveComponentHeight;
    void /* unknown type, empty encoding */ enableAddMarginTop;
    void /* unknown type, empty encoding */ safeAreaMarginTop;
    void /* function */ onWillShowBlock;
    void /* function */ onHideBlock;
    void /* function */ onSearchBlock;
}

@property (nonatomic, readonly) id<IESLiveGiftPanelViewModelProtocol> viewModel;
@property (nonatomic, readonly) id<IESLiveGiftPanelViewModelProtocol> searchPanelViewModel;
@property (nonatomic, readonly) BOOL onSearch;
@property (nonatomic, readonly) _TtC18IESLiveRevenueImpl31IESLiveRebornGiftPanelViewModel *panelViewModel;
@property (nonatomic, retain) UIImageView *backgroundContainer;
@property (nonatomic, retain) IESLiveGiftPanelNonClipViewContainer *nonClipViewContainer;
@property (nonatomic, copy) id /* block */ onWillShowBlock;
@property (nonatomic, copy) id /* block */ onHideBlock;
@property (nonatomic, copy) id /* block */ onSearchBlock;

+ (BOOL)shouldShowRecipientEntranceWithConfiguration:(id)a0 recipientRouter:(id)a1;

- (BOOL)marketingAreaDisplaying;
- (id)realPanelView;
- (void)jsbUpdateExtraInfoToReloadGiftPanelOperationSectionIfNeedWithGiftID:(id)a0 bizType:(id)a1;
- (void)changeBottomViewDeltaHeight:(int)a0;
- (id)layoutInfo;
- (id)backgroundView;
- (id)topView;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 configuration:(id)a2;
- (void)resizeIpadPanelIfNeed;
- (void)showPanel;
- (void)hidePanel:(BOOL)a0 source:(long long)a1;
- (void)updateGiftPanelWithRecipients:(id)a0 allMic:(BOOL)a1 recipientChanged:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
