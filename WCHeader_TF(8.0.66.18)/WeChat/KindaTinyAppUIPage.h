@class MMIUIPage, NSString, MMUIViewController, KindaProxy;
@protocol KindaTinyAppUIPageDelegate;

@interface KindaTinyAppUIPage : NSObject

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) KindaProxy *kindaProxy;
@property (weak, nonatomic) MMUIViewController *loadingViewController;
@property (retain, nonatomic) MMIUIPage *kindaUIPage;
@property (weak, nonatomic) id<KindaTinyAppUIPageDelegate> delegate;

- (void)openTinyApp:(id)a0 extraData:(id)a1;
- (void)destoryTinyAppPage;
- (void)closeUI:(BOOL)a0;
- (void)beginIgnoringInteractionEvents;
- (void)endEditing;
- (void)endIgnoringInteractionEvents;
- (void)refreshNavigationBar;
- (void)setBackgroundColor:(long long)a0;
- (void)setKeyBoardShowCallbackImpl:(id)a0;
- (void)setTopLeftBackBtnCallbackImpl:(id)a0;
- (void)setTopRightBtnImage:(id)a0;
- (void)setTopRightBtnTitle:(id)a0 color:(id)a1;
- (void)setTopRightCallbackImpl:(id)a0;
- (id)getTitle;
- (void)setScreenBrightness:(float)a0;
- (void)setScreenKeepOn:(BOOL)a0;
- (void).cxx_destruct;

@end
