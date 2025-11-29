@interface WCFinderTransitionDismissHook : NSObject

@property (copy, nonatomic) id /* block */ willDismiss;
@property (copy, nonatomic) id /* block */ endDismiss;

- (void).cxx_destruct;

@end
