@class NSString, WCNewShareCardConsumedView;

@interface WebviewJSEventHandler_consumedShareCard : WebviewJSEventHandlerBase <IWCShareCardPkgExt, WCNewShareCardConsumedViewDelegate> {
    NSString *_consumedCardId;
    NSString *_consumedCode;
    WCNewShareCardConsumedView *_newconsumedView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
