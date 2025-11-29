@class NSString;

@interface AWEShareAnnieXService : AWEShareCommonImpl <AWEShareAnnieXContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackWithShareWithContainer:(id)a0 context:(id)a1 task:(id)a2;
+ (void)prepareContextWithContainer:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)experiment_shareChannels;
+ (id)shareChannels;
+ (void)onChannelButtonClickWithShareType:(id)a0 webModel:(id)a1 container:(id)a2 context:(id)a3;
+ (void)parseTitleInWebView:(id)a0 completion:(id /* block */)a1;

- (void)showPanelWithAnnieXContainer:(id)a0 context:(id)a1;

@end
