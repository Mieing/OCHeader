@class TextStatePublishConfiguration, NSString, NSDictionary, TextStatePublishSourceInfo;

@interface WebviewJSEventHandler_publishTextState : WebviewJSEventHandlerBase <TextStatePublishViewControllerDelegate, MMImageLoaderObserver>

@property (retain, nonatomic) TextStatePublishSourceInfo *sourceInfo;
@property (retain, nonatomic) TextStatePublishConfiguration *configuration;
@property (retain, nonatomic) NSString *imageURLString;
@property (retain, nonatomic) NSDictionary *attachInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)dataTypeForString:(id)a0;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)checkPublishSourceInfo:(id)a0 event:(id)a1 resultDict:(id)a2;
- (void)jumpToPublishStatusVC:(id)a0 event:(id)a1 params:(id)a2 resultDict:(id)a3;
- (void)jumpToTextStatePublishViewController;
- (id)jumpLiteAppInfoFromDictionary:(id)a0;
- (id)dataItemsFromJSON:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)onTextStatePublishedWithIconId:(id)a0 iconDescription:(id)a1;
- (void)onTextStatePublishCancelled;
- (void).cxx_destruct;

@end
