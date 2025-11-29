@class NSString, WAWebViewController;

@interface WADelayToForegroundExecuter : NSObject

@property (weak, nonatomic) WAWebViewController *ownerWebViewController;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *jsapiName;

- (void).cxx_destruct;

@end
