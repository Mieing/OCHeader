@class NSString, NumberObj;

@interface ListNumber : NSObject

@property (retain, nonatomic) NSString *leftIdentifier;
@property (retain, nonatomic) NumberObj *number;
@property (retain, nonatomic) NSString *rightIdentifier;

+ (void)initialize;
+ (id)extractFromString:(id)a0;

- (id)initWithLeftIdentifier:(id)a0 valueStr:(id)a1 rightIdentifier:(id)a2;
- (id)initWithLeftIdentifier:(id)a0 valueStr:(id)a1 rightIdentifier:(id)a2 preferType:(int)a3;
- (id)string;
- (BOOL)increase;
- (void).cxx_destruct;

@end
