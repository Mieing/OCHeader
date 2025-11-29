@class NSString;

@interface HoldoutExptParam : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL inPriority;

+ (void)initialize;

- (void)setInPriority:(BOOL)a0;
- (BOOL)inPriority;
- (void)setValue:(id)a0;
- (id)value;
- (void)setKey:(id)a0;
- (id)key;

@end
