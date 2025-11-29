@class NSString, ListValue;

@interface Value : WXPBGeneratedMessage

@property (nonatomic) long long int64Value;
@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) ListValue *listValue;
@property (nonatomic) unsigned long long uint64Value;

+ (void)initialize;

@end
