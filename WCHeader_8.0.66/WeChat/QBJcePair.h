@interface QBJcePair : NSObject

@property (retain, nonatomic) id key;
@property (retain, nonatomic) id value;

+ (id)analyzeExtStr:(id)a0;
+ (id)pairFromExtStr:(id)a0;
+ (id)pairWithValue:(id)a0 forKey:(id)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
