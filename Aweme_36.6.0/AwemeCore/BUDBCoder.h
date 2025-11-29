@class NSMutableDictionary;

@interface BUDBCoder : NSObject

@property (retain, nonatomic) NSMutableDictionary *fields;

- (void)encoderFloat:(double)a0 withField:(id)a1;
- (id)decoderObjectWithField:(id)a0;
- (id)_convertToStringWithValue:(id)a0 andType:(unsigned long long)a1;
- (void)encoderObject:(id)a0 withField:(id)a1;
- (id)decoderTextWithField:(id)a0;
- (double)decoderFloatWithField:(id)a0;
- (long long)decoderIntegerWithField:(id)a0;
- (id)decoderDateWithField:(id)a0;
- (id)initWithDefaultFieldValues;
- (id)convertInsertSQLWithTableNamed:(id)a0;
- (id)convertUpdateSQLWithTableNamed:(id)a0;
- (void)encoderInteger:(long long)a0 withField:(id)a1;
- (void)encoderText:(id)a0 withField:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
