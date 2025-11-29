@class _TtC11WCLayoutNew12WCSwiftValue;

@interface WCLayoutNew.WCSwiftValue : NSObject

@property (class, nonatomic, readonly) _TtC11WCLayoutNew12WCSwiftValue *undefined;

@property (nonatomic) void /* unknown type, empty encoding */ unit;
@property (nonatomic) void /* unknown type, empty encoding */ value;

- (id)initWithUnit:(long long)a0 value:(double)a1;
- (id)initWithFloatLiteral:(double)a0;
- (id)initWithIntegerLiteral:(long long)a0;
- (BOOL)isPoint;
- (BOOL)isPercent;
- (double)percentOf:(double)a0;
- (id)init;
- (void).cxx_destruct;

@end
