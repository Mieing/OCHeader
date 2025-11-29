@class NSString, NSMutableArray;

@interface SimpleCommonConfig_KeyValue : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *value;

+ (void)initialize;

- (void)setValue:(id)a0;
- (id)value;
- (void)setKey:(id)a0;
- (id)key;

@end
