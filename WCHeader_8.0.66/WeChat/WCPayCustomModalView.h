@class UIView, RouteInfo, NSString, UIButton, KindaRichLabelViewV2, NSMutableArray, CustomModal, WCPayWebImageView, UIScrollView;
@protocol WCPayCustomModalViewDelegate;

@interface WCPayCustomModalView : MMWindowViewController <WCPayWebImageViewDelegate, WCPayVoidCallbackDelegate>

@property (retain) CustomModal *m_customModal;
@property (weak) id<WCPayCustomModalViewDelegate> m_delegate;
@property (retain) UIView *m_backgroundView;
@property (retain) UIView *m_navigationView;
@property (retain) UIScrollView *m_contentView;
@property (retain) UIView *m_itemSectionView;
@property (retain) WCPayWebImageView *m_leftImageView;
@property (retain) UIButton *m_leftButton;
@property (retain) KindaRichLabelViewV2 *m_titleView;
@property (retain) NSMutableArray *m_contentArray;
@property BOOL m_protocolSelected;
@property BOOL m_hasClickProtocol;
@property (retain) UIButton *m_confirmButton;
@property (retain) RouteInfo *m_confirmRoute;
@property (retain) NSMutableArray *m_richLabelArray;
@property double backgroundWidth;
@property double backgroundY;
@property (retain) NSString *leftNaviName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModal:(id)a0 delegate:(id)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)updateBackgroundView;
- (void)updateNavigationView;
- (void)updateLeftImageView;
- (void)updateLeftButton;
- (void)updateTitleView;
- (double)updateContent;
- (double)updateTextView:(double)a0 textData:(id)a1;
- (double)updateImageView:(double)a0 imageData:(id)a1;
- (double)updateItemSection:(double)a0 Data:(id)a1;
- (double)updateProtocolButton:(double)a0 protocolButtonData:(id)a1;
- (void)clickCheckBox:(id)a0;
- (void)clickConfirmButton;
- (void)onLoadWCPayWebImageOK:(id)a0;
- (void)onWCPayVoidCallbackWithUserInfo:(id)a0;
- (void)onLeftButtonClick;
- (void).cxx_destruct;

@end
