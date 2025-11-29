@class NSMutableDictionary;

@interface FlutterEmbedderKeyResponder : NSObject <FlutterKeyPrimaryResponder>

@property (readonly, copy, nonatomic) id /* block */ sendEvent;
@property (readonly, copy, nonatomic) NSMutableDictionary *pressingRecords;
@property (nonatomic) unsigned long long modifierFlagOfInterestMask;
@property (nonatomic) unsigned long long lastModifierFlagsOfInterest;
@property (nonatomic) unsigned long long responseId;
@property (readonly, copy, nonatomic) NSMutableDictionary *pendingResponses;

- (id)initWithSendEvent:(id /* block */)a0;
- (void)handlePress:(id)a0 callback:(id /* block */)a1;
- (void)synchronizeModifiers:(id)a0;
- (void)synthesizeCapsLockTapWithTimestamp:(double)a0;
- (void)updateKey:(unsigned long long)a0 asPressed:(unsigned long long)a1;
- (void)sendPrimaryFlutterEvent:(const struct { unsigned long long x0; double x1; int x2; unsigned long long x3; unsigned long long x4; char *x5; BOOL x6; int x7; } *)a0 callback:(id)a1;
- (void)sendEmptyEvent;
- (void)synthesizeModifierEventOfType:(BOOL)a0 timestamp:(double)a1 keyCode:(unsigned int)a2;
- (void)handlePressBegin:(id)a0 callback:(id)a1;
- (void)handlePressEnd:(id)a0 callback:(id)a1;
- (void)handleResponse:(BOOL)a0 forId:(unsigned long long)a1;
- (unsigned int)fixSidedFlags:(int)a0 withLeftFlag:(int)a1 withRightFlag:(int)a2 withLeftKey:(unsigned short)a3 withRightKey:(unsigned short)a4 withKeyCode:(unsigned short)a5 keyDown:(BOOL)a6 forFlags:(unsigned int)a7;
- (unsigned int)adjustModifiers:(id)a0;
- (void).cxx_destruct;

@end
