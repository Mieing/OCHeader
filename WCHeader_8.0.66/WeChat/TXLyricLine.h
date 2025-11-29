@class NSArray;

@interface TXLyricLine : NSObject

@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long durationMs;
@property (retain, nonatomic) NSArray *characterArray;

- (void).cxx_destruct;

@end
