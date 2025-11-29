@class NSString, WAOpenSDKJSEventHandlerContext;

@interface WAOpenSDKJSEventResult : NSObject

@property (copy, nonatomic) NSString *respDataMsg;
@property (retain, nonatomic) WAOpenSDKJSEventHandlerContext *context;

- (void).cxx_destruct;

@end
