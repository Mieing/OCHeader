@class NSString, WCBatchViewCardHelper;

@interface WAJSEventHandler_openCard : WAJSEventHandler_BaseEvent <WCBatchViewCardHelpDelegate>

@property (retain, nonatomic) WCBatchViewCardHelper *viewCardHelp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
