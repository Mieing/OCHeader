@class NSString;

@interface FlutterKeyCallbackGuard : NSObject {
    id /* block */ _callback;
}

@property (nonatomic) BOOL handled;
@property (readonly, copy) NSString *debugHandleSource;

- (id)initWithCallback:(id /* block */)a0;
- (void)pendTo:(id)a0 withId:(unsigned long long)a1;
- (void)resolveTo:(BOOL)a0;
- (void).cxx_destruct;

@end
