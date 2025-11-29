@class MMIUIPage, NSString, OpenLiteAppInfo, MMUIViewController, MMLiteAppViewController, KindaProxy;
@protocol KindaLiteAppUIPageDelegate;

@interface KindaLiteAppUIPage : NSObject <MMLiteAppExt>

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) KindaProxy *kindaProxy;
@property (retain, nonatomic) OpenLiteAppInfo *openInfo;
@property (weak, nonatomic) MMUIViewController *loadingViewController;
@property (weak, nonatomic) MMLiteAppViewController *liteappVC;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) MMIUIPage *kindaUIPage;
@property (weak, nonatomic) id<KindaLiteAppUIPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)openLiteApp:(id)a0 extraData:(id)a1;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)a0 appId:(id)a1 appUuid:(unsigned int)a2 extraData:(id)a3;
- (id)dictionayToTransmitKvData:(id)a0;
- (void)setStore:(id)a0;
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
