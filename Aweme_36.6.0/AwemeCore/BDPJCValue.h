@class JSValue, NSString;

@interface BDPJCValue : NSObject <BDPValueProtocol>

@property (retain, nonatomic) JSValue *JCValue;
@property (readonly) BOOL isUndefined;
@property (readonly) BOOL isNull;
@property (readonly) BOOL isBoolean;
@property (readonly) BOOL isNumber;
@property (readonly) BOOL isString;
@property (readonly) BOOL isObject;
@property (readonly) BOOL isArray;
@property (readonly) BOOL isArrayBuffer;
@property (readonly, nonatomic) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)valueWithData:(void *)a0 size:(unsigned long long)a1 inContext:(id)a2;
+ (id)valueWithDouble:(double)a0 inContext:(id)a1;
+ (id)valueWithJSValueRef:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;
+ (id)valueWithObject:(id)a0 inContext:(id)a1;
+ (id)valueWithInt32:(int)a0 inContext:(id)a1;
+ (id)valueWithUndefinedInContext:(id)a0;
+ (id)valueWithBool:(BOOL)a0 inContext:(id)a1;

- (id)bdp_object;
- (long long)toInt;
- (unsigned long long)arrayBufferLength;
- (char *)arrayBufferData;
- (BOOL)isArrayBuffer;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)valueForProperty:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)isUndefined;
- (BOOL)isNumber;
- (BOOL)isBoolean;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)isObject;
- (BOOL)isNull;
- (id)initWithValue:(id)a0;
- (id)toObject;
- (id)toNumber;
- (id)toString;
- (BOOL)isString;
- (BOOL)isArray;
- (id)callWithArguments:(id)a0;

@end
