@class NSURLRequest, NSString;

@interface WKTemplateViewJSProvider : NSObject <YYWebViewDelegate>

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPreInjectScriptStr;

@end
