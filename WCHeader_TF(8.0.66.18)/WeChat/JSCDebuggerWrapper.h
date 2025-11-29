@class JSCTarget;

@interface JSCDebuggerWrapper : NSObject

@property (nonatomic) struct JSCRemoteConnectionToTarget { void /* function */ **x0; id x1; } *connection;
@property (retain, nonatomic) JSCTarget *targetInternal;
@property (copy, nonatomic) id /* block */ disconnectBlock;

- (void)dealloc;
- (void).cxx_destruct;

@end
