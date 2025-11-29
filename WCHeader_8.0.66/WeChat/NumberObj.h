@class NSString;

@interface NumberObj : NSObject {
    int m_value;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *valueStr;

+ (void)initialize;
+ (id)numberFromValueStr:(id)a0;
+ (id)numberFromValueStr:(id)a0 preferType:(int)a1;

- (id)initWithValue:(int)a0;
- (BOOL)increase;
- (void).cxx_destruct;

@end
