@class NSString, UIButton;

@interface EnterpriseOpenWeworkBottomBar : WCBottomBar <MMImageLoaderObserver> {
    UIButton *_weworkButton;
    NSString *_iconUrl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addOpenWeworkButton:(SEL)a0 target:(id)a1 btnTitle:(id)a2;
- (void)updateBtnTitle:(id)a0 icon:(id)a1 titleColor:(id)a2;
- (void)updateIconImage:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
