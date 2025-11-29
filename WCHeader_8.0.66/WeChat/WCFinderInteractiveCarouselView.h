@class NSString, NSMapTable, WCFinderPanelRingToneGuideView, WCFinderPanelHotCommentView, WCFinderInteractivePanelConfigParamsModel, WCFinderPanelMultiImageCommentView, WCFinderPanelJumpInfoCarouselView;
@protocol WCFinderInteractiveCarouselViewDelegate;

@interface WCFinderInteractiveCarouselView : UIView <WCFinderPanelRingToneGuideViewDelegate, WCFinderPanelHotCommentViewDelegate, WCFinderPanelMultiImageCommentViewDelegate, WCFinderPanelJumpInfoCarouselViewDelegate, WCFinderJumpInfoPanelViewDelegate>

@property (weak, nonatomic) WCFinderInteractivePanelConfigParamsModel *paramsModel;
@property (retain, nonatomic) WCFinderPanelRingToneGuideView *ringToneGuideView;
@property (retain, nonatomic) WCFinderPanelHotCommentView *hotCommentView;
@property (retain, nonatomic) WCFinderPanelMultiImageCommentView *multiImageCommentView;
@property (retain, nonatomic) WCFinderPanelJumpInfoCarouselView *jumpInfoCarouselView;
@property (retain, nonatomic) NSMapTable *carsouselTypeMap;
@property (weak, nonatomic) id<WCFinderInteractiveCarouselViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (unsigned long long)toolBarStyle;
- (id)contentVM;
- (unsigned long long)curCarouselType;
- (void)setCurCarouselType:(unsigned long long)a0;
- (void)resetUIViewState;
- (void)layoutSubviews;
- (void)bindExposureForMultiImageCommentView;
- (BOOL)isShowingHotComment;
- (id)showingHotComment;
- (BOOL)isShowingJumpCarousel;
- (BOOL)canShowHotComment;
- (BOOL)canShowMultiImageComment;
- (BOOL)canShowJumpCarouselGuide;
- (BOOL)canShowRingToneGuide;
- (BOOL)canShowMediaComment;
- (BOOL)showCarouselViewWithParams:(id)a0;
- (void)updateCarouselViewHiddenType:(unsigned long long)a0;
- (double)_layoutRingToneGuideViewFromOffset:(double)a0;
- (double)_layoutJumpCarouselViewFromOffset:(double)a0;
- (double)_layoutHotCommentViewFromOffset:(double)a0;
- (double)_layoutMultiImageCommentViewFromOffset:(double)a0;
- (void)setCarouselView:(id)a0 hidden:(BOOL)a1;
- (void)setCarouselView:(id)a0 hidden:(BOOL)a1 businessType:(int)a2;
- (void)onClickSetRingToneButton;
- (void)onClickPanelHotComment:(id)a0;
- (void)onMultiImageCommentViewClickComment:(id)a0 index:(unsigned long long)a1;
- (void)onJumpCarouselViewClickBannerAction:(id)a0 style:(id)a1;
- (void)onJumpCarouselViewClickButtonAction:(id)a0 style:(id)a1;
- (void)onFinderJumpInfoViewDidClick:(id)a0;
- (void)onFinderJumpInfoViewDidClick:(id)a0 inArea:(unsigned long long)a1;
- (void).cxx_destruct;

@end
