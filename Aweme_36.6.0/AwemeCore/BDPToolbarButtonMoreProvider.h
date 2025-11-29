@class BDPPrivacyAccessAnimator, NSString, BDPToolbarContext, UIView;

@interface BDPToolbarButtonMoreProvider : NSObject <BDPCutLossesMessage, BDPToolbarButtonProtocol> {
    BDPToolbarContext *_toolbarContext;
    UIView *targetView;
}

@property (weak, nonatomic) UIView *panel;
@property (retain, nonatomic) BDPPrivacyAccessAnimator *privacyIconAnimator;
@property (nonatomic) BOOL forcedMoreEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)couldShowNow:(id)a0;

- (void)showMorePanel;
- (void)cutLossesBeginWithUniqueID:(id)a0 info:(id)a1;
- (void)cutLossesEndWithUniqueID:(id)a0 isFulfilled:(BOOL)a1;
- (BOOL)checkShowMorePanel;
- (void)showMorePanel:(id)a0;
- (void)onClickButton:(id)a0;
- (BOOL)shouldDisableMoreButton;
- (void)setupTargetView;
- (id)toolbarContext;
- (void)updateToolBarThemeStyle;
- (void)setToolbarContext:(id)a0;
- (void)setupPrivacyIconAnimator;
- (void)realShowMorePanel:(id)a0;
- (id)targetView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setTargetView:(id)a0;

@end
