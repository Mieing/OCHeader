@class JSEvent, NSString;

@interface WebviewJSEventHandler_dispatchLiteAppAction : WebviewJSEventHandlerBase <MMLiteAppStoreExt> {
    int _callbackId;
}

@property (retain, nonatomic) JSEvent *jsEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
