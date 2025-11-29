@class NSArray, NSString, AWEProfileHeaderContext, UIButton;
@protocol AWEProfileLinkAreaViewDelegate;

@interface AWEProfileLinkAreaView : UIView

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (copy, nonatomic) NSArray *linkList;
@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) BOOL moreButtonClicked;
@property (nonatomic) double currentPointY;
@property (copy, nonatomic) NSString *refer;
@property (weak, nonatomic) id<AWEProfileLinkAreaViewDelegate> delegate;

- (void)enterBusinessEditPage:(id)a0;
- (void)linkLabelClicked:(id)a0;
- (void)configWithContext:(id)a0;
- (id)defaultBtnImage;
- (id)scaleToSize:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)__replaceCompanyUserProfileLinkList:(id)a0 withOriginAdInfo:(id)a1;
- (BOOL)__isSame:(id)a0 with:(id)a1;
- (void)__createLinkBtns;
- (void)removeAllLinkButtons;
- (BOOL)__enableMoreBtnPositionOptimize;
- (id)__createBtnWithLink:(id)a0 width:(double)a1 height:(double)a2 pointX:(double)a3 pointY:(double)a4 index:(long long)a5 font:(id)a6;
- (void)__trackEventWithTag:(id)a0 linkModel:(id)a1 relatedComponentValue:(id)a2 commonTrackDict:(id)a3;
- (double)__showEditButtonAtPointX:(double)a0 pointY:(double)a1;
- (id)__getIconNameWithLink:(id)a0;
- (void)prepareDynamicAbilityIfNeed:(id)a0 button:(id)a1;
- (BOOL)__linkTypeCanEdit:(long long)a0;
- (void)tapMoreButton;
- (id)themeChangeKey:(id)a0;
- (void)__linkLabelClicked:(id)a0 openLink:(BOOL)a1;
- (void)__openLink:(id)a0 sender:(id)a1;
- (id)__getRelatedComponentValue:(id)a0;
- (id)__joinEnterpriseParamsIfNeeded:(id)a0 aweme:(id)a1;
- (void)__transferToWebView:(id)a0 eventID:(id)a1 creativeID:(id)a2 logExtra:(id)a3;
- (id)__getBTMChainStringWhenTransferWithLink:(id)a0 sender:(id)a1;
- (void)__trackGameDownloadIfNeededWithLinkModel:(id)a0 forShow:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
