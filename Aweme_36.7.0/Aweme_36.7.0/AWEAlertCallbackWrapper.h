@interface AWEAlertCallbackWrapper : NSObject

@property (copy, nonatomic) id /* block */ showCallback;
@property (copy, nonatomic) id /* block */ clickCallback;
@property (copy, nonatomic) id /* block */ closeCallback;

- (void).cxx_destruct;

@end
