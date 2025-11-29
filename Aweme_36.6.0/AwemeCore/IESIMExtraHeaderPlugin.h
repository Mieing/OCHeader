@class NSString;

@interface IESIMExtraHeaderPlugin : NSObject <TIMXExtraRequestHeaderProviderProtocol>

@property BOOL isManualTrigger;
@property (copy, nonatomic) id /* block */ triggerTagBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)autoTriggerTagInfo;
- (id)manualTriggerTagInfo;
- (void)handleDidEnterBackgroundNotification;
- (id)getMCCMNC;
- (id)extraHeaderForHTTPRequest:(int)a0;
- (id)extraHeaderForWebsocketRequest:(int)a0;
- (void)configCommonExtraHeadersForRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)loginManager;

@end
