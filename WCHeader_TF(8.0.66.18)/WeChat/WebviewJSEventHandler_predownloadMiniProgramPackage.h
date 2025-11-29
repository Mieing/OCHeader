@class NSString, JSEvent;

@interface WebviewJSEventHandler_predownloadMiniProgramPackage : WebviewJSEventHandlerBase <WAPrefetchMgrExt>

@property (retain, nonatomic) NSString *requestKey;
@property (retain, nonatomic) JSEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
