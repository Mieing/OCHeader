@class CSJAdSlot, NSString, NSDictionary, UIViewController, CSJDislikeContext, CSJWKWebViewClient;
@protocol CSJAd;

@interface CSJWebViewJSBridgeHandler : NSObject <BUWebViewDelegate>

@property (weak, nonatomic) CSJWKWebViewClient *webView;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (readonly, nonatomic) id<CSJAd> adInfo;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (copy, nonatomic) NSString *stashCid;
@property (copy, nonatomic) NSString *stashLogExtra;
@property (retain, nonatomic) NSDictionary *relatedMaterialMeta;
@property (copy, nonatomic) NSString *createExtraString;
@property (copy, nonatomic) id /* block */ downloadDidCloseStoreController;
@property (copy, nonatomic) id /* block */ adDidClick;
@property (weak, nonatomic) UIViewController *parentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerJSBridge3;
- (void)sendTrackDataFromURLString:(id)a0;
- (id)jsCallNative_dynamicTrackWithParams:(id)a0;
- (id)buJSB3_adInfoWithViewModel:(id)a0;
- (id)buJSB3_dynamicTrackWithViewModel:(id)a0;
- (id)buJSB3_getMaterialMetaWithViewModel:(id)a0;
- (id)trackTag;
- (void)jsCallNative_commonConvertWithParams:(id)a0;
- (void)openInternalStoreWithMaterial:(id)a0;
- (id)buJSB3_commonConvertWithViewModel:(id)a0;
- (void)sendTrackDataWithParameters:(id)a0;
- (void)buildRelatedMaterialMeta;
- (id)jsCallNative_adInfo;
- (void)jsCallNative_sendLogWithParams:(id)a0;
- (id)jsCallNative_getMaterialMeta;
- (id)jsCallNative_getNativeSiteCustomData;
- (void)jsCallNative_openAdLandPageLinksWithParams:(id)a0;
- (id)jsCallNative_download_app_adWithParams:(id)a0;
- (void)jsCallNative_click_button;
- (id)pbu_urlWithString:(id)a0;
- (void)openWebViewNewPageWithUrl:(id)a0;
- (void)registerJSBridgePlugin;
- (id)buJSB3_getATTStatusWithViewModel:(id)a0;
- (id)buJSB3_click_buttonWithViewModel:(id)a0;
- (id)buJSB3_sendLogWithViewModel:(id)a0;
- (id)buJSB3_openAdLandPageLinksWithViewModel:(id)a0;
- (id)buJSB3_getNativeSiteCustomDataWithViewModel:(id)a0;
- (id)buJSB3_adInfoStashWithViewModel:(id)a0;
- (id)buJSB3_download_app_adWithViewModel:(id)a0;
- (id)initWithAdInfo:(id)a0 adSlot:(id)a1 webView:(id)a2;
- (void).cxx_destruct;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;

@end
