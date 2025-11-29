@interface TPPlayerRange : NSObject

@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long endTimeMs;

+ (id)makeWithStartTimeMs:(long long)a0 endTimeMs:(long long)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
