@class FlutterBasicMessageChannel;

@interface FlutterChannelKeyResponder : NSObject <FlutterKeyPrimaryResponder>

@property (retain, nonatomic) FlutterBasicMessageChannel *channel;
@property (nonatomic) long long pressedModifiers;

- (id)initWithChannel:(id)a0;
- (void)handlePress:(id)a0 callback:(id /* block */)a1;
- (void)updatePressedModifiers:(id)a0;
- (long long)adjustModifiers:(id)a0;
- (void).cxx_destruct;

@end
