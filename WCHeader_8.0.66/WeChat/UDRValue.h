@class NSString, UDRListValue;

@interface UDRValue : WXPBGeneratedMessage

@property (nonatomic) long long int64Value;
@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) UDRListValue *listValue;
@property (nonatomic) unsigned long long uint64Value;
@property (nonatomic) int int32Value;
@property (nonatomic) unsigned int uint32Value;

+ (void)initialize;

- (void)setUint32Value:(unsigned int)a0;
- (unsigned int)uint32Value;
- (void)setInt32Value:(int)a0;
- (int)int32Value;
- (void)setUint64Value:(unsigned long long)a0;
- (unsigned long long)uint64Value;
- (void)setListValue:(id)a0;
- (id)listValue;
- (void)setStringValue:(id)a0;
- (id)stringValue;
- (void)setDoubleValue:(double)a0;
- (double)doubleValue;
- (void)setInt64Value:(long long)a0;
- (long long)int64Value;

@end
