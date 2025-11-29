@class UIView, WCPayC2CMessageViewModel, NSString, WCPayWebPagView, NSMutableDictionary, CAShapeLayer, UIImageView, WCPayWebImageView;

@interface WCPayC2CMessageCellView : WCPayBaseMessageCellView <PAGViewListener, WCPayWebPagViewDelegate>

@property (readonly, nonatomic) WCPayC2CMessageViewModel *viewModel;
@property (retain, nonatomic) NSString *bgImageName;
@property (retain, nonatomic) NSString *bgHighlightImageName;
@property (retain, nonatomic) NSString *maskImageName;
@property (retain, nonatomic) NSString *maskHighlightImageName;
@property (retain, nonatomic) NSMutableDictionary *showResourceMaskImageViewCache;
@property (retain, nonatomic) UIView *showResourceBgView;
@property (retain, nonatomic) WCPayWebImageView *corpLogoIcon;
@property (retain, nonatomic) WCPayWebPagView *pagView;
@property (retain, nonatomic) CAShapeLayer *skinMaskLayer;
@property (retain, nonatomic) WCPayWebPagView *atmospherePagView;
@property (retain, nonatomic) WCPayWebImageView *showResourceImageView;
@property (retain, nonatomic) UIImageView *showResourceMaskView;
@property (retain, nonatomic) WCPayWebImageView *showResourceWidgetImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)updateStatus;
- (BOOL)isAAC2CMsg;
- (BOOL)isAAC2CHandledMsg;
- (BOOL)isHBC2CMsg;
- (BOOL)isHBC2CHandledMsg;
- (void)updateIconView;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateBgImageView:(BOOL)a0;
- (void)updateHbSourceImageView;
- (id)demoCoverAtmospherePagFile;
- (void)onAnimationEnd:(id)a0;
- (BOOL)isHongBaoHandled;
- (void)playAtmopherePagIfNeed;
- (void)playPagIfNeed;
- (void)onLoadWCPayWebPagOK:(id)a0;
- (id)generateMaskImage:(id)a0 isSender:(BOOL)a1;
- (void)initSourceViewInside;
- (void)onTouchUpInside;
- (void)layoutInternal;
- (BOOL)canAdjustsFontSizeToFitWidth;
- (void).cxx_destruct;

@end
