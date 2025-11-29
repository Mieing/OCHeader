@interface BDParam : NSObject

@property (readonly, nonatomic) BOOL isSet;
@property (readonly, nonatomic) id value;

+ (id)paramWithValue:(id)a0;
+ (id)paramWithData:(id)a0 key:(id)a1 defaultValue:(id)a2;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)valueToString;
- (id)stringToValue:(id)a0;
- (id)__initWithValue:(id)a0 isSet:(BOOL)a1;
- (void).cxx_destruct;

@end
