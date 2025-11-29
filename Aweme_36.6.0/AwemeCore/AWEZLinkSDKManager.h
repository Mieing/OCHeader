@class NSString;

@interface AWEZLinkSDKManager : NSObject <BDUGDeepLinkDelegate, BDUGSecurePasteboardProtocol, AWEAppAwemeSettingMessage, AWEZLinkProtocol>

@property BOOL didRegisterNoti;
@property BOOL didSetPasteboardDelegate;
@property BOOL isNeedHandleZlinkWhenSettingUpdated;
@property BOOL didRegisteredSettingUpdatedMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)forbidZlinkPasteboardByChangeCount;
+ (id)pasteboardChangeCountQueue;
+ (Class)aAWEZLinkSDKManagerCommonAdapterClass;
+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)handleZlinkFromPasteboard;
- (void)deepLinkOnScheme:(id)a0 type:(long long)a1;
- (void)recognizePasteboardWithExtraInfo:(id)a0 completion:(id /* block */)a1;
- (id)urlsForZlinkValid;
- (BOOL)validateZlinkForURL:(id)a0;
- (void)handleZlinkFromSchemeURL:(id)a0;
- (void)handleZlinkFromUniversalLink:(id)a0;
- (void)registerSDK;
- (id)aAWEZLinkSDKManagerCommonAdapter;
- (void)p_didHandleZlinkFromPasteboard;
- (BOOL)checkPasteboardChangeCount;
- (void)deepLinkOnEvent:(id)a0 params:(id)a1;
- (id)init;
- (void)start;
- (void)dealloc;

@end
