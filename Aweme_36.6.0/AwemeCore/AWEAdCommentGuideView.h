@class NSString, AWEButton, UIImageView, UIView, AWEAwemeModel, UIButton;
@protocol AWECommentGuideDelegate;

@interface AWEAdCommentGuideView : UIView <AWEAdCommentGuideView>

@property (retain, nonatomic) AWEButton *openButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEButton *nameButton;
@property (retain, nonatomic) AWEButton *descButton;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *seperateView;
@property (nonatomic) double fontScale;
@property (nonatomic) double headerViewH;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL hasClosed;
@property (weak, nonatomic) id<AWECommentGuideDelegate> delegate;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL shouldForceLightMode;
@property (retain, nonatomic) UIView *effectView;
@property (copy, nonatomic) id /* block */ willCloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adExtraData;
- (void)closeBtnClicked:(id)a0;
- (void)onUIThemeChange;
- (id)closeButtonImage;
- (id)getComponentInfo;
- (void)onViewClicked;
- (BOOL)shouldTrackClickForGeneralSearch;
- (void)trackClickForSearchResult:(BOOL)a0;
- (void)openProfileOrLandingPageWithRefer:(id)a0;
- (void)openLearnMoreBtnClicked:(id)a0;
- (void)onAvatarClicked:(id)a0;
- (void)onNameClicked:(id)a0;
- (void)onDescClicked:(id)a0;
- (double)preferredWidthForLabel:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetLayout;
- (void)_setupUI;
- (BOOL)isWhiteColor;

@end
