@interface CepConfig : NSObject

@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL realtimeProcess;

- (id)toDict;
- (id)initWithDefaultValue;

@end
