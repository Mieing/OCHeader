@class UIView, AWETemplateBarModel, AWETemplateHotspotSeparatorView, AWETemplateHotspotTapGestureRecognizer, NSString, UIImageView, UILabel, AWETemplateBarContext;
@protocol AWETemplateHotspotViewActionProtocol, AWETemplateViewActionProtocol;

@interface AWETemplateHotspotView : UIView <AWETemplateViewProtocol>

@property (retain, nonatomic) AWETemplateBarModel *currentModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWETemplateHotspotSeparatorView *separatorView;
@property (retain, nonatomic) UILabel *mainContent;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) AWETemplateHotspotTapGestureRecognizer *recognizer;
@property (weak, nonatomic) id<AWETemplateHotspotViewActionProtocol> hotspotDelegate;
@property (weak, nonatomic) id<AWETemplateViewActionProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)configSubviews;
- (void)p_relayout;
- (void)layoutSubview;
- (double)updateHeaderIconSizeWHForLargeFontAdaptIfNeeded:(double)a0;
- (double)updateTailIconSizeWHForLargeFontAdaptIfNeeded:(double)a0;
- (void)updateSizeWithLayoutModel:(id)a0 targetView:(id)a1;
- (void)didClickCommonView;
- (id)labelTextFontWithSize:(double)a0 weight:(long long)a1;
- (BOOL)p_enableTrackerBegin2did;
- (void)p_handleDidClickCommonViewWithSearchViewController:(id)a0 withPreloadResource:(long long)a1 withPrefetchTag:(id)a2;
- (void)p_logPreloadEventWithResource:(long long)a0;
- (BOOL)p_enableFurionSmart;
- (BOOL)p_enablePrefetch;
- (BOOL)p_enableTouchPreload;
- (void)p_handleDefaultClick;
- (void)p_handleSmartAndTouchWithTag:(id)a0;
- (void)p_handleClickWithPredictFetchTag:(id)a0;
- (void)p_triggerDelegateWithParams:(id)a0;
- (double)p_probabilityB;
- (BOOL)p_enableIsHotScene;
- (void)p_itemTouchCancel;
- (void)p_itemTouchBeginWithLocation:(id)a0;
- (void)p_itemTouchEnd;
- (void)addSubViews;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)initWithData:(id)a0;
- (void)updateWithData:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateFooterLayout;

@end
