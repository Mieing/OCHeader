@class BDPPrivacyAccessAnimator, NSMutableDictionary, BDPToolbarContext, NSString, UIView;
@protocol BDPToolBarViewDelegate;

@interface BDPToolbarViewV2 : UIView <BDPToolBarViewProtocol>

@property (retain, nonatomic) BDPToolbarContext *toolbarContext;
@property (nonatomic) unsigned long long buttonOptions;
@property (nonatomic) unsigned long long lastButtonOptions;
@property (retain, nonatomic) NSMutableDictionary *buttonProviderMap;
@property (nonatomic) long long toolbarStyle;
@property (nonatomic) long long toolBarThemeStyle;
@property (retain, nonatomic) BDPPrivacyAccessAnimator *privacyIconAnimator;
@property (nonatomic) BOOL forcedMoreEnable;
@property (weak, nonatomic) id<BDPToolBarViewDelegate> delegate;
@property (nonatomic) BOOL showCustomerService;
@property (copy, nonatomic) NSString *navigationStyle;
@property (retain, nonatomic) UIView *rightToolbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)showMorePanel;
- (void)hideMoreButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closeButtonFrame;
- (void)receiveEnterFullScreenNotification:(id)a0;
- (void)receiveEnterSmallScreenNotification:(id)a0;
- (void)feedbackButtonClicked;
- (void)reLayout;
- (void)setShowCustomerService:(BOOL)a0 withAnimated:(BOOL)a1;
- (void)setIsXScreen:(BOOL)a0;
- (id)initWithUniqueID:(id)a0 withViewType:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originMoreButtonFrame;
- (BOOL)checkShowMorePanel;
- (void)showMorePanel:(id)a0;
- (unsigned long long)currentButtonOptions;
- (void)removeOptions:(unsigned long long)a0;
- (void)addOrRemoveNotifications:(BOOL)a0;
- (id)findProvider:(unsigned long long)a0 deepFind:(BOOL)a1;
- (unsigned long long)filterCouldShowOptions:(unsigned long long)a0;
- (void)handleProvider:(unsigned long long)a0;
- (id)addProviderIfHas:(unsigned long long)a0;
- (void)reLayoutXScreen;
- (void)reLayoutFullScreen;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)removeProvider:(unsigned long long)a0;
- (void)addOptions:(unsigned long long)a0;
- (BOOL)hasOptions:(unsigned long long)a0;
- (void)updateButtons;
- (void)resetOptions:(unsigned long long)a0;

@end
