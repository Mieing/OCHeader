@class NSData;

@interface FlutterRestorationPlugin : NSObject {
    BOOL _waitForData;
    BOOL _restorationEnabled;
}

@property (copy, nonatomic) id /* block */ pendingRequest;
@property (copy, nonatomic) NSData *restorationData;

- (id)initWithChannel:(id)a0 restorationEnabled:(BOOL)a1;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)markRestorationComplete;
- (void)reset;
- (id)dataForFramework;
- (void).cxx_destruct;

@end
