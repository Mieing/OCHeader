@class NSString, WKScriptMessage;

@interface SECWKScriptHandlerContext : NSObject

@property (retain, nonatomic) WKScriptMessage *message;
@property (copy, nonatomic) NSString *messageHandlerClass;

- (void).cxx_destruct;

@end
