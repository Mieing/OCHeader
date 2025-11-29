@class NSString;

@interface AWEAdStarAtlasThirdPartyWebMonitorManager : NSObject <AWEAdStarAtlasThirdPartyWebMonitorManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleWithErrorInfo:(id)a0;
+ (id)linkExtra;
+ (void)startUpdatingWebViewMonitorScript;
+ (void)executeMonitorScriptWithWebView:(id)a0 starLinkID:(id)a1 creativeID:(id)a2;
+ (id)requestURL;


@end
