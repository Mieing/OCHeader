@class NSNumber;

@interface FLMusicIntType : NSObject

@property (retain, nonatomic) NSNumber *value;

+ (id)makeWithValue:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
