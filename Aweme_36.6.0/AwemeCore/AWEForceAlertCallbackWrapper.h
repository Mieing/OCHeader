@interface AWEForceAlertCallbackWrapper : NSObject

@property (copy, nonatomic) id /* block */ showCallback;
@property (copy, nonatomic) id /* block */ closeCallback;

- (void).cxx_destruct;

@end
