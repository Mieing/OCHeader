@class FixTitleColorButton, NSString, POIInfo, UIView, TakeCarServiceDataLogic, MMUILabel, MMUIButton, MMUIActivityIndicatorView;
@protocol MMLocationPoiHeadViewDelegate;

@interface MMLocationPoiHeadView : UIView <ILinkEventExt> {
    POIInfo *_poiInfo;
    TakeCarServiceDataLogic *_takeCarDataLogic;
    BOOL _isExpand;
    unsigned int _reportExpandStatus;
}

@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) MMUILabel *addressMainLabel;
@property (retain, nonatomic) MMUILabel *addressSubLabel;
@property (retain, nonatomic) UIView *addressMsgView;
@property (retain, nonatomic) MMUIButton *topRectangeView;
@property (retain, nonatomic) FixTitleColorButton *forwardBtn;
@property (retain, nonatomic) MMUIButton *navMapBtn;
@property (retain, nonatomic) MMUILabel *navMapLabel;
@property (retain, nonatomic) MMUIButton *takeCarBtn;
@property (retain, nonatomic) MMUILabel *takeCarLabel;
@property (retain, nonatomic) MMUIButton *privatTipsView;
@property (retain, nonatomic) FixTitleColorButton *favBtn;
@property (nonatomic) double animationPercent;
@property (weak, nonatomic) id<MMLocationPoiHeadViewDelegate> delegate;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isFromNearbyLife;
@property (nonatomic) BOOL shouldShowForwardBtn;
@property (nonatomic) BOOL showTakeCarBtn;
@property (nonatomic) BOOL shouldHiddenNaviBtn;
@property (nonatomic) BOOL showPoiDetail;
@property (nonatomic) BOOL shouldHiddenAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 poiInfo:(id)a1;
- (void)dealloc;
- (void)initSubviews;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithPoiInfo;
- (void)updateFavSelected:(BOOL)a0;
- (void)layoutBtnGroups;
- (double)buttonGroupLeft;
- (void)setSubAddress:(id)a0;
- (void)onDragProgressChanged:(double)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onTapForwardBtn:(id)a0;
- (void)onTapNavMapBtn:(id)a0;
- (void)onTapSwitchBtn:(id)a0;
- (void)onTapFavBtn:(id)a0;
- (void)onLongPressFavBtn:(id)a0;
- (void)onLongPressAddressLabel:(id)a0;
- (void)onTapCopyMenuItem;
- (void)copyAddressString;
- (void)onMenuControllerWillShow;
- (void)onMenuControllerDidHide;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onTapTakeCarBtn:(id)a0;
- (void)onPhoneClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)contentHeight:(double)a0 detailHeight:(double)a1;
- (double)contentHeightWhenLoading:(double)a0;
- (double)shrinkFavBtnNeedHeight;
- (BOOL)shouldShowFavButton;
- (void).cxx_destruct;

@end
