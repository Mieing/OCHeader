@class NSString, NSArray, BDUGDeepLinkInfo, NSMutableArray;
@protocol BDUGDeepLinkDelegate;

@interface BDUGDeepLinkManager : NSObject

@property (nonatomic) long long deepLinkType;
@property (retain, nonatomic) BDUGDeepLinkInfo *info;
@property (weak, nonatomic) id<BDUGDeepLinkDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *pasteboardConsumers;
@property (retain, nonatomic) NSMutableArray *settingsUpdatedBlocks;
@property (nonatomic) BOOL settingsHasUpdated;
@property (retain, nonatomic) NSMutableArray *stayForUpdateUris;
@property (copy, nonatomic) NSString *currentScheme;
@property (copy, nonatomic) NSString *codeLaunchMode;
@property (nonatomic) BOOL needDelayPasteboardParsing;
@property (nonatomic) BOOL needBlockPasteboardRecover;
@property (retain, nonatomic) NSArray *activateAttrParams;

+ (BOOL)isAttributed;
+ (id)shareInstance;

- (id)buildQueryFromDictionary:(id)a0;
- (void)startAppleSearchAdsAttributionIfNeed;
- (void)startTokenAttribution;
- (void)attributionToken;
- (double)delayReportSecconds;
- (void)reportTokenToServer:(id)a0;
- (void)attributionTokenWithCompletion:(id /* block */)a0;
- (void)handleTrackingAuthorizationStatusUpdated;
- (void)consumeScheme:(id)a0;
- (void)settingsStoreNotification;
- (void)handleNewUserLinkActivateIfNeeded:(id)a0 launchType:(long long)a1;
- (void)routerWithScheme:(id)a0;
- (void)trackZlinkTokenVerify:(id)a0 code:(long long)a1 duration:(long long)a2;
- (void)parseSchemeParams:(id)a0 completion:(id /* block */)a1;
- (void)consumeZlinkData:(id)a0;
- (id)gdLabelForUri:(id)a0;
- (void)launchEventWithUri:(id)a0 label:(id)a1 entrance:(id)a2;
- (void)onEventWithUri:(id)a0 type:(long long)a1 extra:(id)a2;
- (void)trackZlinkClipboardVerify:(id)a0 code:(long long)a1 duration:(long long)a2;
- (void)newUserPasteboardRouteFailIfNeeded;
- (void)parseToken:(id)a0 completion:(id /* block */)a1;
- (void)trackZlinkPbFailOpt:(long long)a0 duration:(long long)a1 message:(id)a2;
- (void)request:(id)a0 isPasteboard:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleUniversalLink:(id)a0;
- (void)handleScheme:(id)a0;
- (BOOL)hasReadOrAttributed;
- (void)trackZlinkParseAppLink:(id)a0 result:(long long)a1;
- (void)trackZlinkNetworkTimeConsuming:(long long)a0 timeout:(id)a1 code:(long long)a2 requestUrl:(id)a3;
- (BOOL)isZlink:(id)a0 withType:(long long)a1;
- (void)consumeZlinkToken:(id)a0;
- (void)trackZlinkTokenGenerateWithCode:(long long)a0 message:(id)a1 zlink:(id)a2 scheme:(id)a3;
- (void)requestTokenFromScheme:(id)a0 trackerZlink:(id)a1 trackerScheme:(id)a2 completion:(id /* block */)a3;
- (void)trackZlinkSdkInit:(long long)a0;
- (void)innerDeepLinkWithType:(long long)a0 uri:(id)a1;
- (void)trackZlinkDetermineUniversalLink:(id)a0 settingsHasUpdated:(BOOL)a1;
- (BOOL)enableReadPasteboard;
- (BOOL)removePasteboardFreqLimit;
- (id)buildPasteboardSecureConfigForNotification:(id)a0;
- (void)registerPasteboardNotificationName:(id)a0;
- (void)launchEventWithUri:(id)a0 label:(id)a1 entrance:(id)a2 eventParams:(id)a3;
- (id)generateLaunchEventParamsWithUri:(id)a0 label:(id)a1 entrance:(id)a2;
- (id)zlinkDataWithLink:(id)a0;
- (void)generateTokenFromZlink:(id)a0 scheme:(id)a1 autoWritePasteboard:(BOOL)a2 completion:(id /* block */)a3;
- (void)parseTokenToScheme:(id)a0 completion:(id /* block */)a1;
- (void)registerDeepLinkWithInfo:(id)a0 delegate:(id)a1;
- (void)deepLinkWithType:(long long)a0 uri:(id)a1;
- (id)pasteboardFailOptimizeURLString;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (id)launchMode;
- (unsigned long long)authorizationStatus;
- (void)dealloc;
- (id)sdkVersion;

@end
