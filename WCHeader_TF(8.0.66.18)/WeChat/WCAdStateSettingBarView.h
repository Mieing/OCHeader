@class WCDataItem, WCAdStateSettingBarInfo, WCAdURLImageView, NSString, MMUIButton, MMUILabel;

@interface WCAdStateSettingBarView : MMUIView <IWCAdStateSettingBarExt>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdStateSettingBarInfo *barInfo;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) MMUILabel *likeNumberTitle;
@property (retain, nonatomic) MMUIButton *jumpLinkButton;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) WCAdURLImageView *jumpLinkIcon;
@property (nonatomic) unsigned long long barStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void)setupUI;
- (void)initSubviews;
- (void)showViewWithStyle:(unsigned long long)a0;
- (void)cleanSubViews;
- (void)layoutSubviews;
- (void)updateDataItem:(id)a0;
- (unsigned long long)fetchBarStyle;
- (void)updateStateSettingBarStyleWithAnimation;
- (void)onJumpLinkButtonClick:(id)a0;
- (void)onJumpLinkButtonTouchDown:(id)a0;
- (void)onJumpLinkButtonTouchUp:(id)a0;
- (void)resetJumpLinkButtonState;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)barLogic;
- (void).cxx_destruct;

@end
