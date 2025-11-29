@class NSString;

@interface LyricItem : NSObject

@property (copy, nonatomic) NSString *lyric;
@property (nonatomic) double startTime;

+ (id)makeWithLyric:(id)a0 startTime:(double)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
