@class NSString, UDRValue;

@interface UDRParameterKeyValuePair : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) UDRValue *value;

+ (void)initialize;

- (void)setValue:(id)a0;
- (id)value;
- (void)setKey:(id)a0;
- (id)key;

@end
