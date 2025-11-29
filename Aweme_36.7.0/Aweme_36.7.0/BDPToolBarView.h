@class CALayer, BDPPrivacyAccessAnimator, NSString, UIView, BDPUniqueID, UIButton;
@protocol BDPToolBarViewDelegate;

@interface BDPToolBarView : UIView <BDPCutLossesMessage, BDPToolBarViewProtocol> {
    UIView *_rightToolbar;
    UIView *_leftToolbar;
    UIView *_customerServiceToolbar;
    CALayer *_seperatorLayer;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *customerServiceButton;
@property (retain, nonatomic) BDPPrivacyAccessAnimator *privacyIconAnimator;
@property (nonatomic) BOOL forceHideMoreButton;
@property (nonatomic) BOOL showCustomerService;
@property (weak, nonatomic) UIView *panel;
@property (nonatomic) long long toolbarStyle;
@property (nonatomic) long long toolBarThemeStyle;
@property (nonatomic) BOOL forcedMoreEnable;
@property (weak, nonatomic) id<BDPToolBarViewDelegate> delegate;
@property (copy, nonatomic) NSString *navigationStyle;
@property (readonly, nonatomic) UIView *rightToolbar;
@property (readonly, nonatomic) UIView *leftToolbar;
@property (nonatomic) unsigned long long viewType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked:(id)a0;
- (void)moreBtnClicked:(id)a0;
- (void)showMorePanel;
- (void)hideMoreButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closeButtonFrame;
- (void)feedbackButtonClicked;
- (void)cutLossesBeginWithUniqueID:(id)a0 info:(id)a1;
- (void)cutLossesEndWithUniqueID:(id)a0 isFulfilled:(BOOL)a1;
- (void)recieveEnterFullScreenNotification:(id)a0;
- (void)recieveEnterSmallScreenNotification:(id)a0;
- (void)setShowCustomerService:(BOOL)a0 withAnimated:(BOOL)a1;
- (BOOL)canShowFeedBackButton;
- (BOOL)canShowFeedBackButtonByMeta;
- (BOOL)canShowFeedBackButtonBySettings;
- (id)initWithUniqueID:(id)a0 withViewType:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originMoreButtonFrame;
- (BOOL)checkShowMorePanel;
- (void)showMorePanel:(id)a0;
- (unsigned long long)getMenuHiddenConfiguration:(id)a0;
- (void)realShowMorePanel:(id)a0;
- (double)maxToolBarViewWidth;
- (double)actualRightToolbarXWithCurrentValue:(double)a0;
- (double)customerServiceViewWidth;
- (void)setupCustomerServiceStyle;
- (void)p_closeContainerByCloseButton;
- (void)customerServiceButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setAlpha:(double)a0;
- (void)setupViews;
- (id)initWithUniqueID:(id)a0;

@end
