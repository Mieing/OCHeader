@class NSString, NSDictionary;

@interface BDARVLynxBridgeModule : BDARVLynxBaseBridgeModule <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (nonatomic) BOOL hasShownWebView;
@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (id)monitorCategoryData;
- (id)monitorExtraData;
- (void)resolveActionWithParams:(id)a0 payloadData:(id)a1;
- (void)trackv3:(id)a0;
- (void)enterLive:(id)a0;
- (void)openLink:(id)a0 callback:(id /* block */)a1;
- (void)downloadApp:(id)a0 callback:(id /* block */)a1;
- (void)monitorLynxJSBErrorWithErrorType:(unsigned long long)a0;
- (void)sendMonitor:(id)a0;
- (id)findLiveViewWithView:(id)a0;
- (void)remove;
- (void)track:(id)a0;

@end
