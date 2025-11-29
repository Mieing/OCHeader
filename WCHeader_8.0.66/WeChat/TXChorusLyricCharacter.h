@class NSString;

@interface TXChorusLyricCharacter : NSObject

@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long durationMs;
@property (copy, nonatomic) NSString *utf8Character;

- (void).cxx_destruct;

@end
