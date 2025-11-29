@class NSUndoManager;
@protocol FlutterUndoManagerDelegate;

@interface FlutterUndoManagerPlugin : NSObject

@property (readonly, weak, nonatomic) id<FlutterUndoManagerDelegate> undoManagerDelegate;
@property (retain, nonatomic) NSUndoManager *undoManager;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)resetUndoManager;
- (void)registerUndoWithDirection:(long long)a0;
- (void)registerRedo;
- (void)setUndoState:(id)a0;
- (void).cxx_destruct;

@end
