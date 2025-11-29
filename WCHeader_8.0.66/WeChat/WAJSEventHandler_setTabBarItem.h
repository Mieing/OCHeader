@class NSString, UIImage;

@interface WAJSEventHandler_setTabBarItem : WAJSEventHandler_BaseEvent <MMImageLoaderObserver>

@property (nonatomic) long long iconIndex;
@property (nonatomic) BOOL download;
@property (retain, nonatomic) NSString *failMsg;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *iconPath;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *selectIconPath;
@property (retain, nonatomic) UIImage *selectIconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)retreiveImage:(id)a0;
- (void)stopDownloadImage:(id)a0;
- (void)setItem:(id)a0 webview:(id)a1;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
