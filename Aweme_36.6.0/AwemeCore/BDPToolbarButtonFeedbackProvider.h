@class NSString, UIView, BDPToolbarContext;

@interface BDPToolbarButtonFeedbackProvider : NSObject <BDPToolbarButtonProtocol> {
    BDPToolbarContext *_toolbarContext;
    UIView *targetView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)couldShowNow:(id)a0;
+ (BOOL)canShowFeedBackButtonByMeta:(id)a0;
+ (BOOL)canShowFeedBackButtonBySettings:(id)a0;
+ (BOOL)isIgnoredUsingCustomNavWithAppId:(id)a0;

- (void)openFeedbackPage;
- (void)onClickButton:(id)a0;
- (void)setupTargetView;
- (id)toolbarContext;
- (void)updateToolBarThemeStyle;
- (void)setToolbarContext:(id)a0;
- (id)targetView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setTargetView:(id)a0;

@end
