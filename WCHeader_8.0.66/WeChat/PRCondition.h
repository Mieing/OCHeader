@class NSString, NSMutableArray;

@interface PRCondition : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *op;
@property (retain, nonatomic) NSMutableArray *values;

+ (void)initialize;

- (void)setValues:(id)a0;
- (id)values;
- (void)setOp:(id)a0;
- (id)op;
- (void)setValue:(id)a0;
- (id)value;
- (void)setKey:(id)a0;
- (id)key;

@end
