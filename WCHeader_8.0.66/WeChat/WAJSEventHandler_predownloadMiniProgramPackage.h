@class NSString;

@interface WAJSEventHandler_predownloadMiniProgramPackage : WAJSEventHandler_BaseEvent <WAPrefetchMgrExt>

@property (retain, nonatomic) NSString *requestKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
