@class NSURLRequest, NSString;

@interface WebSearchViewJSProvider : NSObject <YYWebViewDelegate>

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPreInjectScriptStr;
- (BOOL)allowsAutoMediaPlay;
- (BOOL)allowsInlineMediaPlay;

@end
