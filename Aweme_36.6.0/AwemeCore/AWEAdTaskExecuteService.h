@class NSString;

@interface AWEAdTaskExecuteService : HTSService <AWEAdTaskExecuteService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLeftSlideClick:(id)a0;
+ (BOOL)executeLeftSlideClickTrackWithAwemeModel:(id)a0 fromWebView:(BOOL)a1 webViewDidLoadFinish:(BOOL)a2;
+ (void)cancelLeftSlideClickExecution;
+ (void)presentAdTaskLitePanelViewControllerWithModel:(id)a0;


@end
