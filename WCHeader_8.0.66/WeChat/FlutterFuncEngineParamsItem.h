@class NSString, NSData, NSMutableArray, FlutterFuncEngineParamsMap;

@interface FlutterFuncEngineParamsItem : WXPBGeneratedMessage

@property (nonatomic) int valueType;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) long long longValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) float floatValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) NSMutableArray *arrayValue;
@property (retain, nonatomic) FlutterFuncEngineParamsMap *mapValue;

+ (void)initialize;

- (void)setMapValue:(id)a0;
- (id)mapValue;
- (void)setArrayValue:(id)a0;
- (id)arrayValue;
- (void)setBytesValue:(id)a0;
- (id)bytesValue;
- (void)setFloatValue:(float)a0;
- (float)floatValue;
- (void)setBoolValue:(BOOL)a0;
- (BOOL)boolValue;
- (void)setLongValue:(long long)a0;
- (long long)longValue;
- (void)setStringValue:(id)a0;
- (id)stringValue;
- (void)setValueType:(int)a0;
- (int)valueType;

@end
